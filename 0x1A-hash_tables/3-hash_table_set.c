#include "hash_tables.h"
int Inst(hash_node_t **array_ptr, char *value, char *key);
int update(hash_node_t *ptr, char *value, char *key);
/**
 * hash_table_set - set the key/value to index in hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 sucess and 0 failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht && key && *key)
	{
		unsigned long int index = 0;

		index = key_index((const unsigned char *)key, (unsigned long int)ht->size);
		return (Inst(&ht->array[index], (char *)value, (char *)key));
	}
	return (0);
}
/**
 * update -  function to uptdate a key
 * @ptr: pointer to structure node
 * @key: key
 * @value: value
 *
 * Return: 1 sucess and 0 failure
 */
int update(hash_node_t *ptr, char *value, char *key)
{
	while (ptr)
	{
	if (!strcmp(key, ptr->key))
	{
		free(ptr->value);
		ptr->value = strdup(value);
		return (1);
	}
	ptr = ptr->next;
	}
	return (0);
}

/**
 * Inst -  function to insert a key/value
 * @array_ptr: pointer to structure node
 * @key: key
 * @value: value
 *
 * Return: 1 sucess and 0 failure
 */
int Inst(hash_node_t **array_ptr, char *value, char *key)
{
	hash_node_t *new = NULL;

	new = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!new)
		return (0);
	if (!(*array_ptr))
	{
		*array_ptr = new;
		new->next = NULL;
	}
	else
	{
		if (update(*array_ptr, value, key))
		{
			free(new);
			return (1);
		}
		new->next = *array_ptr;
		*array_ptr = new;
	}
	new->key   = strdup(key);
	new->value = strdup(value);
	return (1);
}
