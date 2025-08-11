/*Q8. Create a base class called proof. Use this class to store two int type values that could
be used to prove that triangle is a right angled triangle. Create a class compute
which will determine whether a triangle is a right angled triangle.
Using these classes, design a program that will accept dimensions of a triangle, and
display the result.
(Summary: Prove that triangle is a right angled triangle using pythagoras theorem).*/

#include <iostream>

using namespace std;

class Proof
{
private:
    int a, b, c;

public:
    int input()
    {
        cout<<"Enter a side, b side and c side = ";
        cin>>a>>b>>c;

        return ((a*a)+(b*b));
    }

    int retc(){return c*c;}
};

class Compute: public Proof
{
public:
    void triangle()
    {
        if(input() == retc())
        {
            cout<<"This is right angle triangle";
        }
        else
        {
            cout<<"This is not right angle triangle";
        }
    }

};

int main()
{
    Compute obj;

    obj.triangle();
}
