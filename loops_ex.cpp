#include<iostream>
using namespace std;

int main()
{
	int n, sum=0, prev;
	cin>>n;
	for(int i = 0; i<=n; i++)
	{
		prev = sum;
		sum = sum + i;
		cout<<prev<<" + "<<i<<" = "<<sum<<"\n";
	}
	return 0;
}