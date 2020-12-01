#include<iostream>
using namespace std;
int z = 90;
 int foo()
 {
 	static int x = 10;
 	int a = 5;
 	cout<<x<<" "<<z<<" "<<a<<endl;
 	a++;
 	z++;
 }


int main(int argc, char const *argv[])
{
	foo();
	foo();
	foo();
}
/*
Only diff b/w static and global variables is that global are accessible in any functiona and remains always in memory
statoc are not accessible everywhere. they are only accessible in that function. But they remain in memory tll prog ends.