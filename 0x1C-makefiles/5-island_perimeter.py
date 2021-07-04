#!/usr/bin/python3
"""
Create a function def island_perimeter
(grid): that returns the
perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    function def island_perimeter(grid): that returns the perimeter
    of the island described in grid
    """
    high = 0
    weigh = 0
    counter = 0
    cont2 = 0

    for high in range(len(grid)):
        for weigh in range(len(grid[high])):
            if grid[high][weigh] == 1:
                counter += 1
                if high != 0 and grid[high - 1][weigh] == 1:
                    cont2 += 1
                if weigh != 0 and grid[high][weigh - 1] == 1:
                    cont2 += 1
    return (4 * counter) - (2 * cont2)
