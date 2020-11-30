#include<iostream>
using namespace std;
enum days{mon, tue, wed, thur, fri, sat, sun};
int main(){
	days d;
	d = mon;
	cout<<d; // PUTPUT 0

	d = tue;
	cout<<d; // PUTPUT 1 and so on
}