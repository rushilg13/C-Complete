#include<iostream>
using namespace std;
class Rectangle
{
    private:
	    float l;
	    float b;

    public:
    	int getLen(int len)
    	{
    		if(len<0)
    		{	cout<<"Invalid dimension";
    			exit(0);}
    		else
    		l = len;
    		return l;
    	}
    	int getBred(int bred)
    	{
    		if(bred<0)
    			{cout<<"Invalid dimension";
    			exit(0);}
    		else
    		b = bred;
    		return b;
    	}    	
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
	r1.getLen(10);
	r1.getBred(-20);
	float a=r1.area();
	cout<<a<<endl;
	a=r1.perimeter();
	cout<<a<<endl;

	return 0;
}
