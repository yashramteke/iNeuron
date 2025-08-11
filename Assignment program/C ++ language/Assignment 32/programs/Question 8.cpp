/*Q8. Write a C++ program to find the factorial of a number using copy constructor*/

#include <iostream>

using namespace std;

class Factorial
{
private:
    int num;
public:
    Factorial()
    {
        cout<<"Enter number : ";
        cin>>num;
    }

    Factorial(Factorial &tmp)
    {
        cout<<"copy constructor called"<<endl;
        cout<<"factorial of "<<tmp.num;
        num = tmp.fact(tmp.num, tmp.num-1);
        cout<<" is "<<num;
    }

    int fact(int first, int second)
    {
        if(second > 1)
        {
            first = first * second;
            first = fact(first, second - 1);

            return first;
        }
        else
        {
            return first;
        }
    }
};

int main()
{

    Factorial f1, f2(f1);
}
