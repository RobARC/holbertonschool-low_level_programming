#!/usr/bin/python3


def island_perimeter(grid):

    row = len(grid)
    col = len(grid[0])
    count = 0

    if row == 0:
        return
    
    for a in range(row):
        for b in range(col):
            if(grid[a][b] == 1):
                if(grid[a+1][b] == 0):
                    count += 1
                if(grid[a-1][b] == 0):
                    count += 1
                if(grid[a][b-1] == 0):
                    count += 1
                if(grid[a][b+1] == 0):
                    count += 1
    return count
