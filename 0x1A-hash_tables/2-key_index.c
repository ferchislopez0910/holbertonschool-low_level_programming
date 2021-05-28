#include "hash_tables.h"

/**
 * key_index -  function that creates a hash table.
 * @size: Lenght of structure
 * @key: Lenght of structure
 * Return: Always EXIT_SUCCESS.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_hash = hash_djb2(key);
	unsigned long int position = new_hash % size;

	return (position);
}
