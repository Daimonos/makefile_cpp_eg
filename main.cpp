#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream test("Words.txt");
  int nwords = 0;
 	string  word;
  bool debug = false;

  #if DEBUG
  	cout << "Debug mode enabled\n";
	debug = true;
  #endif
  while (test >> word){
	if(debug){
		cout << "DEBUG: "+word+"\n";
	}
	++nwords;

} 

  cout << "Number of words = " << nwords << endl;
} 
