/*Q9.Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Shapes
{
public:
    Shapes(){}

    Shapes(float b, float h)
    {
        cout<<"Area of triangle : "<<b * h<<endl;
    }

    Shapes(float w, float l, int dummy)
    {
        cout<<"Area of rectangle : "<<w * l<<endl;
    }

    Shapes(float r)
    {
        cout<<"Area of Circle : "<<3.14 * r *r<<endl;
    }
};

int main()
{

    int choice = 0, reset =0;
    do{
        cout<<"1. Area of Triangle"<<endl;
        cout<<"2. Area of Rectangle"<<endl;
        cout<<"3. Area of Circle"<<endl<<endl;

        cout<<"Enter choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
        {
            Shapes Aot(5.0f, 9.6f);
            break;
        }
        case 2:
        {
            Shapes AoR(10.5f, 15.0f, 0);
            break;
        }
        case 3:
        {
            Shapes AoC(7.2f);
            break;
        }
        default:
        {
            cout<<"Wrong choice"<<endl;
            break;
        }
        }

    cout<<"Do you want to retry ? 1/0 : ";
    cin>>reset;
    system("cls");

    }while(reset == 1);

}
