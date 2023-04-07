#include "hash_tables.h"
/**
* hash_table_delete - this function deletes a hash table
* @ht: pointer to the new hash table
*
* Return: void or Null in case of an error.
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *next_node;

if (ht == NULL || ht->array == NULL || ht->size == 0)
return;
for (i = 0; i < ht->size; i++)
{
while (ht->array[i] != NULL)
{
next_node = ht->array[i]->next_node;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = next_node;
}
}
free(ht->array);
ht->array = NULL;
ht->size = 0;
free(ht);
}
