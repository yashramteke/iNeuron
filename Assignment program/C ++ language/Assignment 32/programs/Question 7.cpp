/*Q7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.*/

#include <iostream>

using namespace std;

class Base{
private:
    int *a;
public:
    Base()
    {
        a = (int *)malloc(sizeof(int));
        *a = 10;
    }

    int getData(void)
    {
        return *a;
    }

    int disp(void)
    {
        cout<<"Address of a: "<<a<<" and data of a: ";
        return *a;
    }
};

class Derived:public Base{
private:
    int *b;
public:
    Derived()
    {
        b = (int *)malloc(sizeof(int));
        *b = 20;
    }

    Derived(Base &tmp)
    {
        b = (int *)malloc(sizeof(int));
        *b= tmp.getData();
    }
    int disp(void)
    {
        cout<<"Address of b: "<<b<<" and data of b: ";
        return *b;
    }
};

int main()
{
    Base b1;
    cout<<b1.disp()<<endl;

    Derived d1(b1);
    cout<<d1.disp()<<endl;
}
