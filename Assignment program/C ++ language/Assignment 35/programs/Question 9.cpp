/*Q9. Write a C++ Program to Perform Simple Addition Function Using Templates.*/

#include <iostream>
using namespace std;

template <typename T>
void add()
{
    T num1, num2, ans;

    cout<<"Enter two number = ";
    cin>>num1>>num2;

    ans = num1 + num2;

    cout<<"Answer  =  "<<ans;
}

int main()
{
    cout<<endl<<"Int data type"<<endl;
    add<int>();
    cout<<endl<<"Float data type"<<endl;
    add<float>();

}
