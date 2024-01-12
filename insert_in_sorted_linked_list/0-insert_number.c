#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * insert_node - adds a new node at a sorted listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new;
    listint_t *current;
    listint_t *prev;

    current = *head;
    prev = *head;
      
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = number;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
      
        while (current->n >= number && prev->n <= number)
	  {
	    prev = current;
	    current = current->next;
	  }
	
	prev->next = new;
	new->next = current;
    }

    return (new);
}
