#include<iostream>
using namespace std;

void display()
{
	cout<<"Hello, World!";
}

int main(){
	void (*fp)();  // Declaration
	fp = display; // initialization
	(*fp)();     // Function call
	return 0;
}