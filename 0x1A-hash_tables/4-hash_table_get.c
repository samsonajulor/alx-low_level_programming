#include "hash_tables.h"
/**
 * hash_table_get-  function to get a key
 * @ht: pointer to structure node
 * @key: key
 *
 * Return: adress
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	ptr = ht->array[index];
	if (!ptr)
		return (NULL);

	while (ptr)
	{
		if (!(strcmp(key, ptr->key)))
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
