#!/usr/bin/python3
""" Island """


def island_perimeter(grid):
    """ Island """
    usedCords = []
    count = 0
    for y in range(0, len(grid)):
        for x in range(0, len(grid[y])):

            if grid[y][x] == 1:
                print(grid[y][x])
                if y > 0 and y < len(grid) - 1:
                    if grid[y-1][x] == 0:
                        if (y-1, x) not in usedCords:
                            count += 1
                    if grid[y+1][x] == 0:
                        if (y+1, x) not in usedCords:
                            count += 1
                if x > 0 and y < len(grid[y]) - 1:
                    if grid[y][x-1] == 0:
                        if (y, x-1) not in usedCords:
                            count += 1
                    if grid[y][x+1] == 0:
                        if (y, x+1) not in usedCords:
                            count += 1
                print(count)
    return count
