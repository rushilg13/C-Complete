#include<iostream>
using namespace std;

int* array()
{
	int *p = new int[5];
	for(int i=0; i<5; i++)
	{
		p[i] = i+1;
	}
	return p;
}

int main(int argc, char const *argv[])
{
	int *ptr = array();  
	for(int i=0; i<5; i++)
	{
		cout<<ptr[i]<<endl;
	}
	return 0;
}
