#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
// #include <vector>
// #include <map>
// #include <set>
// #define 5 5

class Solution {
public:
  // int 5= 5;
  bool solveMaze(int maze[5][5]);
  bool solveMazeUtil(int maze[5][5], int x, int y, int sol[5][5]);
  void printSolution(int sol[5][5]);
  bool isSafe(int maze[5][5], int x, int y);
};

#endif
