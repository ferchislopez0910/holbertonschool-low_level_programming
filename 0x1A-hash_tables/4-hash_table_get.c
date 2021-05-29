#include "hash_tables.h"

/**
* hash_table_get - function that retrieves a value associated with a key.
* @ht: ptr of structure
* @key: *ptr key
* Return: 1 SUCCESS or 0 FAIL.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *new_nd = NULL;

	if (key == NULL || ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	new_nd = ht->array[idx];
	while (new_nd != NULL)
	{
		if (!strcmp(new_nd->key, key))
			return (new_nd->value);
		new_nd = new_nd->next;
	}
	return (NULL);
}
