#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @h: pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */


int get_palindrome_size(listint_t **head)
{
  listint_t *current;
  int n;
  
  current = *head;
  n = 0;
  
  while (current != NULL)
    {
      current = current->next;
      n++;
    }

  return (n);
}


int * get_palindrome_tab(listint_t **head, int n)
{
  listint_t *current;
  int *palindrome;
  
  if(!(palindrome = malloc(sizeof(int) * n)))
    return(NULL);

  n = 0;
  current = *head;

  while (current != NULL)
    {
      palindrome[n] = current->n;
      current = current->next;
      n++;
    }

  return (palindrome);
}


int is_palindrome(listint_t **head)
{
    listint_t *current;
    unsigned int n; /* number of nodes */
    int *palindrome;
    int *part1;
    int *part2;
    int i;
    
    current = *head;
    n = get_palindrome_size(&current);
    palindrome = get_palindrome_tab(&current, n);
    
    if(!(part1 = malloc(sizeof(int) * n / 2)))
       return(-1);

    if(!(part2 = malloc(sizeof(int) * n / 2 )))
       return(-1);
    
    for(i = 0; i < n / 2; i++)
      {
	part1[i] = palindrome[i];
	part2[i] = palindrome[(n - 1) - i];	
	if(part1[i] != part2[i])
	  return(0);
      }

    free(palindrome);
    free(part1);
    free(part2);
    return (1);
}


