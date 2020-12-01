#include<iostream>
using namespace std;

void display()
{
	cout<<"Hello, World!";
}

int main(){
	void (*fp)();  // Declaration
	fp = display; // initialization
	(*fp)();     // Function call
	return 0;
}

//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int max(int x, int y)
{
	if (x>y)
	cout<<x<<endl;
	else
	cout<<y<<endl;
}

int min(int x, int y)
{
	if (x<y)
	cout<<x<<endl;
	else
	cout<<y<<endl;
}

int main()
{
	int a=10, b=12;
	int (*fp)(int, int);
	fp = max;
	(*fp)(a,b);
	fp = min;
	(*fp)(a,b);
}

////////////////////////////////////////////////////////////////