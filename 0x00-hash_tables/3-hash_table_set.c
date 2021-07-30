#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add element to
 * @key: key
 * @value: value associated with the key
 * Return: index at which the key/value pair should be stored
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *new, *temp;

	if (!ht || !value || !key || !strcmp(key, ""))
		return (0);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	i = key_index((const unsigned char *) key, ht->size);
	new->value = (char *) strdup(value);
	new->key = (char *) strdup(key);
	new->next = NULL;
	if (ht->array[i])
	{
		temp = ht->array[i];
		while (temp)
		{
			if (!strcmp(key, temp->key))
			{
				free(temp->value);
				free(new);
				return (1);
			}
			temp = temp->next;
		}
		if (!temp)
		{
			new->next = ht->array[i];
			ht->array[i] = new;
		}
	}
	else
		ht->array[i] = new;
	return (1);
}
