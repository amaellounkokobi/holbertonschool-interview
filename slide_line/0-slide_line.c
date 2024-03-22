#include <stdlib.h>
#include <stdio.h>
/**
 * slide_left - slides and merges an array of integers
 *
 * @line: Pointer to the array of integer to be printed
 * @size: Number of elements in @line
 */
int slide_left(int *line, int *line2, size_t size)
{
  size_t i;
  int index;
  size_t curr_len;

  index = 0;
  curr_len = 0;
  
  for (i = 0; i < size; i++)
    {
      if (line2[i] != 0)
	{
	  if (index == 0)
	    {
	      index = line2[i];
	    }
	  else if (index == line2[i])
	    {   
	      line[curr_len] = index + line2[i];
	      index = 0;
	      curr_len++;
	    }
	  else
	    {
	      index = line2[i];
	    }
	}
    }

  if (curr_len != 0)
    {
      if (index != 0)
	{
	  line[curr_len] = index;
	}
    }
  else
    {
      *line = *line2; 
    }
  
  return (1);
}


/**
 * slide_right - slides and merges an array of integers
 *
 * @line: Pointer to the array of integer to be printed
 * @size: Number of elements in @line
 */
int slide_right(int *line, int *line2, size_t size)
{
  size_t i;
  int index;
  size_t curr_len;
  int a;

  a = i;
  index = 0;
  curr_len = size - 1;
  
  for (a = size - 1; a >= 0; a--)
    {
      if (line2[a] != 0)
	{
	  if (index == 0)
	    {
	      index = line2[a];
	    }
	  else if (index == line2[a])
	    {    
	      line[curr_len] = index + line2[a];
	      index = 0;
	      curr_len--;
	    }
	  else
	    {
	      index = line2[a];
	    }
	}
    }

  if (curr_len != size - 1)
    {
      if (index != 0)
	{
	  line[curr_len] = index;
	}
    }
  else
    {
      *line = *line2; 
    }
  
  return (1);
}


/**
 * slide_line - slides and merges an array of integers
 *
 * @line: Pointer to the array of integer to be printed
 * @size: Number of elements in @line
 * @direction: direction of slide
 */
int slide_line(int *line, size_t size, int direction)
{
  size_t i;
  int line2[32];
  
  for (i = 0; i < size; i++)
    {
      line2[i] = line[i];
      line[i] = 0;
    }
  
  if (direction == -1){
    return slide_left(line, line2, size);
  } else {
    return slide_right(line, line2, size);
  }

}
