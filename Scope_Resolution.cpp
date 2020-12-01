#include<iostream>
using namespace std;
class Rectangle
{
    private:
        float l;
        float b;

    public:
        Rectangle ()     // Default Constructor
        {
            l = 0;
            b = 0;
        }

        Rectangle (int le, int br)  // Parametrized Constructor
        {
            getLen(le);
            getBred(br);
        }

        Rectangle (Rectangle &r)
        {
            l = r.l;
            b = r.b;
        }

        int getLen(int len)
        {
            if(len<0)
            {   cout<<"Invalid dimension";
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

        float perimeter();        // Function declared inside class but elaborated outside using scope resolution

};

float Rectangle::perimeter()     // Scope Resolution is ::
{
    return 2*(l+b);
}


int main(int argc, char const *argv[])
{
    Rectangle r1(10,5);
    float a=r1.area();
    cout<<a<<endl;
    a=r1.perimeter();
    cout<<a<<endl;

    Rectangle r2(r1);
    a=r2.area();
    cout<<a<<endl;
    a=r2.perimeter();
    cout<<a<<endl;
    return 0;
}
