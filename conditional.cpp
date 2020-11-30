#include<iostream>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	if(a>b)
	{
		cout<<a<<" is greater";
	}
	else
	{
		cout<<b<<" is greater";
	}

	if(0)
	{
		cout<<"This code is not printed as 0 means false in if block";
	}

	if(10000)
	{
		cout<<"This code is printed as all numbers except 0 means True in if block";
	
	}
	return 0;
}