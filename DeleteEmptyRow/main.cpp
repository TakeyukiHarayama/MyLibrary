#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void) {
  ifstream ifs("./test.txt");
  string str;

  if (ifs.fail())
  {
    cerr << "Failed to open file." << endl;
    return -1;
  }

  while (getline(ifs, str))
  {
    if (str.size()!=1)
    {
      cout << str << endl;
    }
  }
  return 0;
}