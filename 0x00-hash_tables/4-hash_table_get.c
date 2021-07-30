#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key looking for
 * Return: index at which the key/value pair should be stored
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_v;
	hash_node_t *new = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	key_v = key_index((const unsigned char *) key, ht->size);
	new = ht->array[key_v];
	while (new)
	{
		if (!strcmp(key, new->key))
		{
			return (new->value);
		}
		new = new->next;
	}
	return (NULL);
}
