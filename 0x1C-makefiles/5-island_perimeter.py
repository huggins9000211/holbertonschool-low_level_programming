#!/usr/bin/python3
""" Island """


def island_perimeter(grid):
    """ Island """
    m, n = len(grid[0]), len(grid)
    count = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                if i == n-1 or grid[i+1][j] == 0:
                    count += 1
                # up
                if i == 0 or grid[i-1][j] == 0:
                    count += 1
                # left
                if j == m-1 or grid[i][j+1] == 0:
                    count += 1
                # right
                if j == 0 or grid[i][j-1] == 0:
                    count += 1
    return count
