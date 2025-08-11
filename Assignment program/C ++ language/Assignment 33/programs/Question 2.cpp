/*Q2. Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.)*/

#include <iostream>
using namespace std;

class Shape
{
private:
    float pie = 22.7f;
    float r;

public:
    void get_data(float r, int dummy=0)
    {
        this->r = r;
    }

    float ret_r(){return r;}
    float ret_pie(){return pie;}
};

class Circle: public Shape
{
public:
    void disp()
    {
        cout<<"Area of circle >>> "<<ret_pie() * (ret_r() * ret_r())<<endl;
    }
};

int main()
{
    Circle c1;

    c1.get_data(5);
    c1.disp();
}
