#include "hash_tables.h"

/**
* hash_table_set -  Insert new_nd.
* @ht: ptr of structure
* @key: *ptr key
* @value: *ptr value
* Return: 1 SUCCESS or 0 FAIL.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_nd;
	hash_node_t *aux = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	

	idx =  key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		new_nd = malloc(sizeof(hash_node_t));

		if (new_nd == NULL)
			return (0);

		new_nd->key = strdup(key);
		new_nd->value = strdup(value);
		new_nd->next = NULL;
		ht->array[idx] = new_nd;
		return (1);
	}

	aux = ht->array[idx];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new_nd = malloc(sizeof(hash_node_t));

	if (new_nd == NULL)
		return (0);

	new_nd->value = strdup(value);
	new_nd->key = strdup(key);
	new_nd->next = NULL;
	ht->array[idx] = new_nd;
	return (1);
}
