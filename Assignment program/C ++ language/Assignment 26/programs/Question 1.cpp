/*Q1. Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts.
Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/

#include<iostream>
using namespace std;

class Complex{

private:
    int a, b;
public:
    void setData(int r, int i){
        a = r;
        b = i;
    }

    void showData(void){
        cout<<a<<"+"<<b<<"i";
    }
    Complex add(Complex t){
        t.a = a + t.a;
        t.b = b + t.b;
        return t;
    }

};

int main(){

    Complex c1, c2, ans;

    c1.setData(5,2);
    c2.setData(1,3);

    ans = c1.add(c2);

    ans.showData();
}
