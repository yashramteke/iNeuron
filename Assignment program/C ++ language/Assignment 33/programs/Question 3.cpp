/*Q3.Using the concept of pointers, write a function that swaps the private data values of
two objects of the same class type.*/

#include <iostream>
using namespace std;

class Base
{
private:
    int a, b;

public:
    void input()
    {
        cout<<"a = ";
        cin>>a;

        cout<<"b = ";
        cin>>b;
    }

    void disp()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }

    void swapping(Base *b2)
    {
        int tmp;

        tmp = this->a;
        this->a = b2->a;
        b2->a = tmp;

        tmp = this->b;
        this->b = b2->b;
        b2->b = tmp;

    }
};

int main()
{
    Base b1, b2;

    cout<<"Before swapping"<<endl<<endl;
    cout<<"Enter b1 data"<<endl;
    b1.input();
    cout<<"Enter b2 data"<<endl;
    b2.input();

    cout<<endl<<"After swapping"<<endl<<endl;
    b1.swapping(&b2);
    cout<<"b1 data"<<endl;
    b1.disp();
    cout<<"b2 data"<<endl;
    b2.disp();
}
