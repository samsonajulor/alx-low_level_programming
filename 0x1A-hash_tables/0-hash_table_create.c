#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: size of hash table
 *
 * Return: adress of hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_ta = NULL;
	unsigned long int i = 0;

	if (!size)
		return (NULL);
	h_ta = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!h_ta)
		return (NULL);

	h_ta->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (!h_ta->array)
	{
		return (NULL);
	}
	h_ta->size = size;

	while (i < size)
		h_ta->array[i++] = NULL;
	return (h_ta);
}
