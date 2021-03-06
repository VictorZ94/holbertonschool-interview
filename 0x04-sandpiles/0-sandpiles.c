#include "sandpiles.h"

/**
 * print_mygrid - Print 3x3 grids sum
 * @grid: only one 3x3 grid
 *
 */
void print_mygrid(int grid[3][3])
{
	int i, j;

	printf("=\n");
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

/**
 * sandpiles_sum - Print 3x3 grids sum
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 *
 */
void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int x, y, check = 0;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			grid1[x][y] = grid1[x][y] + grid2[x][y];
			if (grid1[x][y] <= 3)
				check++;
		}
	}

	if (check < 9)
	{
		print_mygrid(grid1);
		toppled(grid1);
	}

}

/**
 * is_stable - check if sandpiles is stable
 * @grid: 3x3 grid
 * Return: 1 on sucess otherwise 0.
 */
int is_stable(int grid[3][3])
{
	int i = 0, j = 0, check = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid[i][j] > 3)
				check = 1;
		}
	}
	return (check);
}

/**
 * toppled - toppled 3x3 grid added
 * @grid1: only 3x3 grid
 *
 */
void toppled(int grid1[3][3])
{
	int x, y, num = 0;
	int sandpile_temp[3][3];

	while (is_stable(grid1))
	{
		for (x = 0; x < 3; x++)
			for (y = 0; y < 3; y++)
				sandpile_temp[x][y] = grid1[x][y];
		for (x = 0; x < 3; x++)
		{
			for (y = 0; y < 3; y++)
			{
				num = grid1[x][y];
				if (num >= 4)
				{
					sandpile_temp[x][y] -= 4;
					if (x - 1 >= 0)
						sandpile_temp[x - 1][y]++;
					if (y + 1 < 3)
						sandpile_temp[x][y + 1]++;
					if (x + 1 < 3)
						sandpile_temp[x + 1][y]++;
					if (y - 1 >= 0)
						sandpile_temp[x][y - 1]++;
				}
			}
		}
		for (x = 0; x < 3; x++)
			for (y = 0; y < 3; y++)
				grid1[x][y] = sandpile_temp[x][y];
		if (is_stable(grid1))
			print_mygrid(grid1);
	}
}
