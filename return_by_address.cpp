#include<iostream>
using namespace std;

int* array(int size)
{
	int *p = new int[size];
	for(int i=0; i<size; i++)
	{
		p[i] = i+1;
	}
	return p;
}

int main(int argc, char const *argv[])
{
	int *ptr = array[5];  
	return 0;
}
