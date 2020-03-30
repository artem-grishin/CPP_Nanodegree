#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::ifstream;
using std::cout;
using std::string;
using std::vector;

// TODO: Add the ReadBoardFile function here.
void ReadBoardFile (string p) {
  ifstream my_file;
  my_file.open(p);
  string line;
  if (my_file) {
    cout << "File Stream created." << "\n";
    while (getline(my_file, line)) {
    cout << line << "\n"; 
  }
  }
  
}



int main() {
  string path = "./practice.txt";
  ReadBoardFile(path);
}
