#include <iostream>
using namespace std;

int main()
{
	string name;
	cout<<"Enter Your Name ";
	getline(cin, name);
	// We could have used cin >> name
	// But cin only takes a word as input. so if input was Raj Kumar, only Raj would have been stored and output would be Hello, Raj
	// getline(cin, variable) reads input till \n is not encountred aka complete line is read.
	cout<<"Hello, "<<name;
	return 0;
}