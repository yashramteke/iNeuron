/*Q2. Define a class Rectangle and overload area function for different types of data type.*/

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int area(int, int);
    float area(float, float);
    float area(int, float);
};

int main()
{
    Rectangle r;

    cout<<"area (int, int) = "<<r.area(5, 9)<<endl;
    cout<<"area (float, float) = "<<r.area(6.78f, 12.67f)<<endl;
    cout<<"area (int, float) = "<<r.area(6, 9.45f)<<endl;

}

int Rectangle::area(int l, int w){ return l * w; }

float Rectangle::area(float l, float w){ return l * w; }

float Rectangle::area(int l, float w){ return l * w; }
