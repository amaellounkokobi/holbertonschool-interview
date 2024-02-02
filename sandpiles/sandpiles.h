#ifndef SANDPILES_H
#define SANDPILES_H

#include <stddef.h>

/**
 * 
 * sandepiles_sum - Print 3x3 grids sum
 * 
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 * Description: computes the sum of two sandpiles
 * for Holberton project
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
int is_stable(int grid);
void show_grid(int grid[3][3]);


#endif /* SANDPILES_H */
