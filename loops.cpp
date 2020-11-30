#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0; i<=n; i++)
	{
		cout<<i<<"\n";
	}

	cout<<"\n\n";

	int i=0;
	while(i<=n)
	{
		cout<<i<<"\n";
		i++;
	}

	cout<<"\n\n";
    
    i=0;
	do{
		cout<<i<<"\n";
		i++;
	}while(i<=n);

	return 0;
}