#include "Quiz1.h"
#include <iostream>

using namespace std;
//adding comments to  illustrate how cool github is
//im adding more comments cause that is what rene wants
int main(int argc, char** argv)
{
  //commenting my code because likes commented code
	//if(argc > 1){
		//string test = argv[1];
		//string test ="reneedwqqwefwfgweqAAAA";
		string test = "";

		cout << "please enter a string" << endl;
		cin >> test;

		//Quiz1 q; //stored on the stack
		Quiz1 *q = new Quiz1();//stored on the heap

	  cout << "number of command line arguments: " << argc << endl;
		cout << "the number of vowels in " << test << "  is: " << q->countVowels(test) << endl;
		//cout << "argc is: " << argc << endl;
		//cout << "argv[0] is : " << argv[0] << endl;

		cout << "program exited successfully" << endl;
		delete q;
	//}
	//else{
		//cout << "INVALID USAGE: please provide an input string" << endl;
		//cout << "USAGE: ./foobar.out [input_string]" << endl;
	//}
	//destructor is executed
	return 0;
}
