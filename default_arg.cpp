#include<iostream>
using namespace std;

int product(int x, int y, int z=1)   // z=1 is default value. will be used in case only 2 parameters are passed, if 3 are passed then that value will be used
{
	return x*y*z;
}

int main()
{
	int a=10, b=9, c=2;
	cout<<product(a,b)<<endl;     // Even though only 2 parameterds passed, same function is called
	cout<<product(a,b,c)<<endl;  // Even though only 3 parameterds passed, same function is called
}