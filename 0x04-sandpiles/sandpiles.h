#ifndef SANDPILE_H
#define SANDPILE_H

#include <stdlib.h>
#include <stdio.h>
void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
void sum_grids(int grid1[3][3], int grid2[3][3]);
void print_mygrid(int grid[3][3]);
void toppled(int grid1[3][3]);
int is_stable(int grid[3][3]);

#endif /* Sandpile  */
