/*Q9.Create a base class called volume. Use this class to store two double type values
that could be used to compute the volume of figures. Derive two specific classes
called cube and sphere from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_volume() to compute and display the volume of figures. Make
display_volume() as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube
or a sphere interactively, and display the volume.*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Shape
{
private:
    double x, y;

public:

    void get_data()
    {
        cout<<"Enter side of cube : ";
        cin>>x;

        cout<<"Enter radius of sphere : ";
        cin>>y;
    }

    virtual void display_volume()
    {
        cout<<"Volume of cube : "<<cube()<<endl;
        cout<<"Volume of sphere : "<<sphere()<<endl;
    }

    int cube()
    {
        return (x*x*x);
    }

    float sphere()
    {
        return ((4/3)*3.14*y*y*y);
    }
};

class Cube: public Shape
{
public:
    void display_volume()
    {
        cout<<"Volume of cube : "<<cube()<<endl;
    }
};

class Sphere: public Shape
{
public:
    void display_volume()
    {
        cout<<"Volume of sphere : "<<sphere()<<endl;
    }
};

int main()
{
    Shape *s1;
    Cube c1;
    Sphere p1;

    s1 = &c1;
    s1->get_data();
    s1->display_volume();
    cout<<endl;
    s1 = &p1;
    s1->get_data();
    s1->display_volume();
}
