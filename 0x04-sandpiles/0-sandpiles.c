#include "sandpiles.h"

/**
 * sum_grids - sum two stable grids
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 */

static void sum_grids(int grid1[3][3], int grid2[3][3])
{

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			grid1[i][j] = grid1[i][j] + grid2[i][j];
		}
	}
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */

static void print_grid(int grid[3][3])
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
 * correct_grids - correct the sand in the grid
 * @grid1: 3x3 grid
 *
 */

static void correct_grids(int grid1[3][3])
{
	int i, j;
	int new_grid[3][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				grid1[i][j] -= 4;
				if ((i + 1) >= 0  && (i + 1) < 3)
					grid1[i + 1][j] += 1;

				if ((i - 1) >= 0  && (i - 1) < 3)
					grid1[i - 1][j] += 1;

				if ((j + 1) >= 0  && (j + 1) < 3)
					grid1[i][j + 1] += 1;

				if ((j - 1) >= 0  && (j - 1) < 3)
					grid1[i][j - 1] += 1;
			}
		}
	}
	sum_grids(grid1, new_grid);
}

/**
 * sandpiles_sum - omputes the sum of two sandpiles
 * @grid1: Left 3x3 grid
 * @grid2: Right 3x3 grid
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{

	int i, j;

	sum_grids(grid1, grid2);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
			{
				print_grid(grid1);
				correct_grids(grid1);
			}
		}
	}
}
