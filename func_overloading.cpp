#include<iostream>
using namespace std;

int add(int x, int y)
{
	return x+y;
}

int add(int x, int y, int z)
{
	return x+y+z;
}

// Same Function name but we overload the function meaning use same named function and make it perform 2 different tasks because the number or types of parameters is different from one another,

int main()
{
	int a=10, b=12, c, d;
	c = add(a,b);
	d = add(a,b,c);
	cout<<d<<endl; 
	return 0;
}
