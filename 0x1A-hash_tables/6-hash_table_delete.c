#include "hash_tables.h"
/**
 * hash_table_delete-  function to print a hash table
 * @ht: pointer to structure node
 *
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *ptr = NULL;

	if (!ht || !(ht->array))
		return;

	while (index < ht->size)
	{
		ptr = ht->array[index];

		while (ptr)
		{
			free(ptr->value);
			free(ptr->key);
			ptr = ptr->next;
			free(ht->array[index]);
			ht->array[index] = ptr;

		}
		free(ht->array[index]);
				index++;
	}
	free(ht->array);
	free(ht);
}
