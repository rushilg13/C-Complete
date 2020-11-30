#include<iostream>
using namespace std;
// Typedef increases Readibility of code
typedef float marks;
typedef int roll_no;

int main(){
	roll_no r1=1, r2=1, r3=2;
	marks m1=20.5, m2=30.25, m3=40.0;

	cout<<"Total marks is"<<m1+m2+m3<<"\n";
	cout<<"Roll Number of students in class "<<r1<<" "<<r2<< " " <<r3;
}