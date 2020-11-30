#include<iostream>
using namespace std;

int main()
{
	int n=1;
	for(int i=1; i<=5; i++)
	{
		cout<<endl;
		for(int j=1; j<=5; j++)
		{

			cout<<n++;
		}
	}

	return 0;
}

/*
OUTPUT

1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 


*/


#include<iostream>
using namespace std;

int main()
{
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{

			cout<<"*";
		}
	cout<<endl;	
	}

	return 0;
}

/*
OUTPUT

*
**
***
****
*****

*/

#include<iostream>
using namespace std
int main()
{
	for(int i=5; i>=1; i--)
	{
		for(int j=1; j<=i; j++)
		{

			cout<<"*";
		}
	cout<<endl;	
	}

	return 0;
}

/*
OUTPUT

*****
****
***
**
*

*/
