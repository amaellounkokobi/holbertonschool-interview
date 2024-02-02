#include <stdlib.h>
#include <stdio.h>

 /**
 * sandpiles_sum
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 */
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
      for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
	    {
	      
	      if(grid1[i][j] > 3)
		{
		  grid1[i][j] = grid1[i][j] - 4;  
	      
		  /* Check adjacent grid and pile */

		  /* bottom */
		  if(grid1[i + 1][j])
		    grid1[i + 1][j]++;

		  /* top */
		  if(grid1[i - 1][j])
		    grid1[i - 1][j]++;
		  
		  /* left */
		  if(grid1[i][j + 1])
		    grid1[i][j + 1]++;

		  /* right */
		  if(grid1[i][j - 1])
		    grid1[i][j - 1]++;
		}
	    }
	}
      
      printf("=\n");
      print_grid(grid1);
    }
}



int is_stable(int grid){

  int i, j;
  
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
        {
	  if (grid[i][j] > 3){
	    return(0);
	  }
        }
    }
  return(1);
}
