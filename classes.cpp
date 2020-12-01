#include<iostream>
using namespace std;
class Rectangle
{
    public:
    float l;
    float b;

	float area()
	{
		return l*b;
	}

	float perimeter()
	{
		return 2*(l+b);
	}
};


int main(int argc, char const *argv[])
{
	Rectangle r1;
	r1.l = 10;
	r1.b = 20;
	float a=r1.area();
	cout<<a<<endl;
	float a=r1.perimeter();
	cout<<a;
	return 0;
}
