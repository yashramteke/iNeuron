/*Q10. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
square and parallelogram from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
square or a parallelogram interactively, and display the area.*/

#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
    double x, y, z;

public:

    void get_data()
    {
        cout<<"Enter side of square : ";
        cin>>x;

        cout<<"Enter base and height : ";
        cin>>y>>z;
    }

    virtual void display_area()
    {
        cout<<"Area of square : "<<square()<<endl;
        cout<<"Area of parallelogram : "<<para()<<endl;
    }

    int square()
    {
        return (x*x);
    }

    float para()
    {
        return (y*z);
    }
};

class Square: public Shape
{
public:
    void display_area()
    {
        cout<<"Area of square : "<<square()<<endl;
    }
};

class Parallelogram: public Shape
{
public:
    void display_area()
    {
        cout<<"Area of parallelogram : "<<para()<<endl;
    }
};

int main()
{
    Shape *s1;
    Square c1;
    Parallelogram p1;

    s1 = &c1;
    s1->get_data();
    s1->display_area();
    cout<<endl;
    s1 = &p1;
    s1->get_data();
    s1->display_area();
}
