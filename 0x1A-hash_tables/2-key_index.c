#include "hash_tables.h"
/**
 * key_index - index correspondent to pair key/value
 * @key: key
 * @size: size of hash table
 *
 * Return: unsigned long int equivalent to key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
