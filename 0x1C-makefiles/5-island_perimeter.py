#!/usr/bin/python3
"""
A program that returns the perimeter of the island 
"""


def island_perimeter(grid):
    """
    0 is water while 1 is land
    """
    width = len(grid[0])
    height = len(grid)
    edge = 0
    size = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                size += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    edge += 1
                if (row > 0 and grid[row - 1][col] == 1):
                    edge += 1

    return size * 4 - edge * 2
