#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {

 /* cout << "Num of arguments (argc): " << argc << endl;
  cout << "The arguments are: " << endl;
  for (int i= 1; i < argc; i++){
    cout << "argv[" << i << "] = " << argv[i] << endl;
  }
  */

  ofstream f;
  f.open("stuff.txt");
  for (int i = 1; i < argc; i++){
    f << argv[i] << endl;
  }
  f.close();

  return 0;
}