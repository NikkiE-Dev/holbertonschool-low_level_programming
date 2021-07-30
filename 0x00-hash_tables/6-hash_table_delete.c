#include "hash_tables.h"

/**
 * hash_table_delete - to delete hash table
 * @ht: hash table you want to delete
 * Return: index at which the key/value pair should be stored
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new = NULL, *release = NULL;
	unsigned long int a;

	if (!ht)
	{
		return;
	}
	for (a = 0; a < ht->size; a++)
	{
		new = ht->array[a];
		while (new)
		{
			release = new;
			new = new->next;
			free(release->value);
			free(release);
		}
	}
	free(ht->array);
	free(ht);
}
