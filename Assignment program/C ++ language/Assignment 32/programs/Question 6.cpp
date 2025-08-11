/*Q6.C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.*/

#include <iostream>

using namespace std;

class A{
private:
    int a;
public:
    A(){a=10;}
};

class B:public A{
private:
    int b;
public:
    B(){b=20;}

    int getB(void)
    {
        return b;
    }
};

class C: public B{
private:
    int c;
public:
    C()
    {
        c=30;
        cout<<"default constructor called"<<endl;
        cout<<c<<endl<<"--------------------------------"<<endl;
    }

    C(int tmp)
    {
        c = tmp;
        cout<<"parameterized constructor called"<<endl;
        cout<<c<<endl<<"--------------------------------"<<endl;
    }

    C(B &tmp)
    {
        c = tmp.getB();
        cout<<"copy constructor called"<<endl;
        cout<<c<<endl<<"--------------------------------"<<endl;
    }
};

int main()
{
    B b1;
    C c1, c2(100), c3(b1);
}
