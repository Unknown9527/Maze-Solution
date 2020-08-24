#include "src/lib/solution.h"
#include "gtest/gtest.h"
// #include <vector>

using namespace std;
#include <iostream>

// #define N 5

using namespace std;

TEST(TEST0, TEST0) {

  Solution solution;

  int maze[5][5] = {
                  { 1, 1, 0, 0, 0 },
                  { 1, 0, 1, 1, 1 },
                  { 1, 1, 0, 0, 1 },
                  { 1, 1, 0, 0, 1 },
                  { 1, 1, 1, 1, 1 } };

  auto result0 = solution.solveMaze(maze);

  EXPECT_EQ(result0, true);

}

TEST(TEST1, TEST1) {

  Solution solution;

  int maze[5][5] = {
                  { 1, 1, 0, 0, 0 },
                  { 1, 0, 1, 1, 1 },
                  { 1, 1, 0, 0, 1 },
                  { 1, 0, 0, 0, 1 },
                  { 1, 0, 1, 1, 1 } };

  auto result0 = solution.solveMaze(maze);

  EXPECT_EQ(result0, false);

}




