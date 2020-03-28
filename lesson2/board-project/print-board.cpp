#include <iostream>
#include <vector>
using namespace std;
using std::vector;

// TODO: Add PrintBoard function here.
void PrintBoard (vector<vector<int>> board) {
for (auto v : board) {
  for (auto i : v) {
          cout << i;
        }
    cout << "\n";
    }
  
}
int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.
  PrintBoard(board);
}
