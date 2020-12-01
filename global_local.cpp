#include<iostream>
using namespace std;
 int x = 10;
int main(int argc, char const *argv[])
{
	int x = 20;
	{
		int x = 30;
		cout<<x<<endl;
	}
	cout<<x<<endl;
	cout<<::x<<endl;  // :: is scope resolution. a global variable cannot accessed until scope resolution is used.
}
