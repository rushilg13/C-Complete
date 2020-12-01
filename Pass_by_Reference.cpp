#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	cout<<a<<" "<<b<<endl;
	a=a+b;
	b = a-b;
	a = a-b;
	cout<<a<<" "<<b<<endl;
}

int main(int argc, char const *argv[])
{
	int a=10, b=20;
	swap(a,b);
	cout<<a<<" "<<b<<endl;   // In pass by reference, after passing the argumnets, the changes are reflected outside the function block.
	return 0;
}