#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @h: pointer to list
 * Return: 0 or 1
 */
int check_cycle(listint_t *list)
{
    const listint_t *current;
    const listint_t *first;
    current = list;
    first = list;
    
    while (current != NULL)
    {
      if (first == current->next)
	return(1);
      current = current->next;     
    }

    return(0);

}
