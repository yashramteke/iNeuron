/*Q4. Create a base class called shape. Use this class to store 2 double type values that
could be used to compute the area of figures. Derive 2 specific classes called triangle
and rectangle from the base shape. Add to the base class a member function
get_data() to initialise base class data members and another member function
display_area() to compute and display the area of figures. Make display_area() as a
virtual function and redefine this function in derived classes to suit their requirements.
Using these 3 classes, design a program that will accept the dimensions of the
shapes interactively and display area.*/

#include<iostream>
using namespace std;

class Shape
{
private:
    double x, y;

public:
    void get_data()
    {
        cout<<"Enter data x >>> ";
        cin>>x;

        cout<<"Enter data y >>> ";
        cin>>y;
    }

    virtual void display_area()
    {
        cout<<"Area of rectangle >>> "<< x * y<<endl;
        cout<<"Area of triangle >>> "<< 1/2 * x * y<<endl;
    }

    double ret_x(){return x;}
    double ret_y(){return y;}
};

class Triangle: public Shape
{
public:
    void display_area()
    {
        cout<<"Area of triangle >>> "<< 1/2 * (ret_x() * ret_y())<<endl;
    }
};

class Rectangle: public Shape
{
public:
    void display_area()
    {
        cout<<"Area of rectangle >>> "<< ret_x() * ret_y()<<endl;
    }
};

int main()
{
    Shape *ptr;
    Triangle t1;
    Rectangle r1;

    ptr = &t1;
    t1.get_data();
    ptr->display_area();

    ptr = &r1;
    r1.get_data();
    ptr->display_area();
}
