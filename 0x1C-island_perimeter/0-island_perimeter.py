#!/usr/bin/python3
"""
Describe a function that find the perimeter of a island
"""


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid
    """
    row = len(grid)
    column = len(grid[0])
    perimeter = 0

    for y in range(row):
        for x in range(column):
            if grid[y][x]:
                if x == 0 or not grid[y][x - 1]:
                    perimeter += 1
                if x == column - 1 or not grid[y][x + 1]:
                    perimeter += 1
                if y == 0 or not grid[y - 1][x]:
                    perimeter += 1
                if y == row - 1 or not grid[y + 1][x]:
                    perimeter += 1
    return perimeter
