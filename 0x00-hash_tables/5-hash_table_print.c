#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table you want to look into
 * Return: index at which the key/value pair should be stored
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new = NULL;
	unsigned long int a, num = 0;

	if (!ht)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		new = ht->array[a];
		while (new)
		{
			if (num > 0)
			{
				printf(", ");
			}
			printf("\'%s\': \'%s\'", new->key, new->value);
			new = new->next;
			num++;
		}
	}
	printf("}\n");
}
