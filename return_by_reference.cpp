#include<iostream>
using namespace std;

int & print(int &a)
{
	cout<<a<<endl;
	return a;
}

int main(int argc, char const *argv[])
{
	int x = 10;
	print(x) = 25;   // We have a function at the left side of an assignment operator. 
	cout<<x;  
	return 0;
}
