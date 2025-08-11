/*Q6. Extend above to display the area of circles. For a circle,only one value is needed i.e.
radius but in get_data() function 2 values are passed.*/

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
