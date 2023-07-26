#!/usr/bin/python3
""" A function that returns the perimeter of the island decribed in grid """


def island_perimeter(grid):
    """Returns the perimeter of the island in the grid"""

    if not grid or not grid[0]:
        return 0
    
    row, col = len(grid), len(grid[0])
    per = 0
    for x in range(row):
        for y in range(col):
            if grid[x][y] == 1:
                per += 4
            if x > 0 and grid[x - 1][y] == 1:
                per -= 2
            if y > 0 and grid[x][y - 1] == 1:
                per -= 2
    return per
