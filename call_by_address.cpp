#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	*a=*a+*b;
	*b = *a-*b;
	*a = *a-*b;
}

int main()
{
	int a=10, b=20;
	cout<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;
	return 0;
}
// Here, the values are actually swapped unlike call by value.