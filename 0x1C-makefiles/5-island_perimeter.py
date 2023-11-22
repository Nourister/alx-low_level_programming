#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Parameters:
    - grid (list of lists of integers): 2D grid where 0 represents water and 1 represents land.

    Returns:
    - int: Perimeter of the island.
    """
    perimeter = 0

    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check left neighbor
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right neighbor
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                # Check top neighbor
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom neighbor
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter

