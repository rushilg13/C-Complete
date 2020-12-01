
// Refer Func_Overloading.cpp beofre this
// This is a new way to tackle same problem 
// Temlpates are used to make a function do some task for any data type
#include<iostream>
using namespace std;

int add(int x, int y)
{
	return x+y;
}

float add(float x, float y)
{
	return x+y;
}

int main()
{
	int a=10, b=12;
	float c=10.9f, d=22.29f, e;
	c = add(a,b);
	e = add(c,d);
	cout<<c<<endl;
	cout<<e<<endl; 
	return 0;
}

// OUTPUT is 22    44.29
// But we are doing same task in both the functions just with different datatypes. thus use templates

#include<iostream>
using namespace std;

template <class T>
T add (T x, T y)
{
	return x+y;
}

int main()
{
	int a=10, b=12;
	float c=10.9f, d=22.29f, e;
	c = add(a,b);
	e = add(c,d);
	cout<<c<<endl;
	cout<<e<<endl; 
	return 0;
}


