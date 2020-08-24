#include "src/lib/solution.h"
#include <iostream>

#define N 5

using namespace std;

int main()
{
    Solution solution;
    int maze[N][N] = {
                    { 1, 1, 0, 0, 0 },
                    { 1, 0, 1, 1, 1 },
                    { 1, 1, 0, 0, 1 },
                    { 1, 1, 0, 0, 1 },
                    { 1, 1, 1, 1, 1 } };

    cout << "One possible path: "<<endl;
    // cout << solution.solveMaze(maze) << endl;

    solution.solveMaze(maze);
    cout << "input:" << endl;
    solution.printSolution(maze);
    
    
    return EXIT_SUCCESS;
}
