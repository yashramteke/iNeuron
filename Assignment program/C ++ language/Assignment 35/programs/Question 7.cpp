/*Q7. Write a C++ Program of Templated class derived from Non-templated class.*/

#include <iostream>
using namespace std;

class Parent
{
public:
    int number()
    {
        return 5;
    }

};

template <typename T>
class Child: public Parent
{
public:
    void addition(T num)
    {
        cout<<"Addition = "<<number() + num;
    }
};

int main()
{
    Child<float> c;
    c.addition(10.2);
}
