#include "hash_tables.h"

/**
 * hash_table_create - creates empty hash table
 *
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *newtable = NULL;

newtable = malloc(sizeof(hash_table_t));
	if (!newtable)
		return (NULL);
newtable->array = malloc(sizeof(void *) * size);
	if (!newtable->array)
		return (NULL);
newtable->size = size;
return (newtable);
}
