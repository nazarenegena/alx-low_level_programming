#include "lists.h"
/**
* free_list - Frees a list_t list.
* @head: A pointer to the list_t list.
*/
void free_list(list_t *head)
{
if (!head)
return;
if (head->next)
free_list(head->next);
free(head->str);
free(head);
}
