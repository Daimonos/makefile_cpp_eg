#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream test("Words.txt");
  int nwords = 0;
 	string  word;

  while (test >> word){
	++nwords;

} 

  cout << "Number of words = " << nwords << endl;
} 
