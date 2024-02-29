#include <stdio.h>
#include <stdlib.h>
#include "palindrome.h"

/**
 * is_palindrome - function that checks whether or not
 * a given unsigned integer is a palindrome.
 * @n: is the number to be checked
 * Return: return 1 if n is a palindrome, and 0 otherwise
 **/


int is_palindrome(unsigned long n){
  unsigned long m;
  unsigned long i;
  unsigned long coef;
  unsigned long mult;
  unsigned long revn;

  coef = 1;
  i = n;
  m = n;
  mult = 1;
  revn = 0;

  while(i / mult != 0){
    mult *= 10;
  }

  while(i / coef != 0){
    m = (n % coef) / (coef * 0.1);
    revn += (m * mult);
    mult /= 10;
    coef *= 10;
   }

  m = (n % coef) / (coef * 0.1);
  revn = revn + (m * mult);

  if(n == revn)
    return(1);
  else
    return(0);
}
