#include <stdlib.h>
#include <stdio.h>

 /**
 * sandpiles_sum
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 */


int is_stable(int grid1[3][3]){

  int i, j;
  
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
        {
	  if (grid1[i][j] > 3){
	    return(0);
	  }
        }
    }
  return(1);
}

void show_grid(int grid[3][3])
{
  int i, j;
  
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  if (j)
	    printf(" ");
	  printf("%d", grid[i][j]);
	}
      printf("\n");
    }
}

void sandpiles_sum(int grid1[3][3], int grid2[3][3]){

  int i, j;

  /* Sum of the grid */
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  grid1[i][j] = grid1[i][j] + grid2[i][j];  
	} 
    }
    

  /* Sand pile */    
  while(is_stable(grid1) == 0)
    {
      
      printf("=\n");
      show_grid(grid1);
      
      for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
	    {
	      
	      if(grid1[i][j] > 3)
		{
		 
		  grid1[i][j] = grid1[i][j] - 4;  

		  if(grid1[i][j] < 0 )
		    grid1[i][j] = 0;  
		  
		  /* Check adjacent grid and pile */

		  /* bottom */
		  if(i + 1 >= 0 && i + 1 < 3)
		    grid1[i + 1][j] += 1;

		  /* top */

		  if(i - 1 >= 0 && i - 1 < 3)
		    grid1[i - 1][j] += 1;
		  
		  /* left */
		  if(j + 1 >= 0 && j + 1 < 3)
		    grid1[i][j + 1] += 1;

		  /* right */
		  if(j - 1 >= 0 && j - 1 < 3)
		    grid1[i][j - 1] += 1;
		}
	    }
	}

    }
}
