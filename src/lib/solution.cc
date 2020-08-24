#include "solution.h"
#include <iostream>
// #include <vector>
// #include <algorithm>   

// #include <stack>
// #include <set>

bool Solution::solveMaze(int maze[5][5])
{
    int sol[5][5] = { { 0, 0, 0, 0, 0 },
                    { 0, 0, 0, 0, 0 },
                    { 0, 0, 0, 0, 0 },
                    { 0, 0, 0, 0, 0 },
                    { 0, 0, 0, 0, 0 } };

    if (solveMazeUtil(maze, 0, 0, sol) == false) {
        printf("Solution doesn't exist");
        return false;
    }
    
    printSolution(sol); // the code will output one possible solution
    return true;
}

bool Solution::solveMazeUtil(int maze[5][5], int x, int y, int sol[5][5])
{
    // if (x, y is goal) return true
    if (x == 5 - 1 && y == 5 - 1) {
        sol[x][y] = 1;
        return true;
    }

    // Check if maze[x][y] is valid
    if (isSafe(maze, x, y) == true) {
        // mark x, y as part of solution path
        sol[x][y] = 1;

        /* Move forward in x direction */
        if (solveMazeUtil(maze, x + 1, y, sol) == true)
            return true;

        /* If moving in x direction doesn't give solution then
        Move down in y direction */
        if (solveMazeUtil(maze, x, y + 1, sol) == true)
            return true;

        /* If none of the above movements work then BACKTRACK:
            unmark x, y as part of solution path */
        sol[x][y] = 0;
        return false;
    }

    return false;
}

void Solution::printSolution(int sol[5][5])
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            // printf(" %d ", sol[i][j]);
            std::cout << sol[i][j] << " ";
        // printf("\n");
        std::cout << std::endl;
    }
}

bool Solution::isSafe(int maze[5][5], int x, int y)
{
    // if (x, y outside maze) return false
    if (x >= 0 && x < 5 && y >= 0 && y < 5 && maze[x][y] == 1)
        return true;

    return false;
}
