//Q2. Write a C++ program to overload unary operators that is increment and decrement.

#include <iostream>
using namespace std;

class Unary{
private :
    int a=5;
public:

    void operator-- (void){
         cout<<"Pre-Decrement : "<<--a<<endl;
    }

    void operator-- (int){
        cout<<"Post-Decrement : "<<a--<<endl;
    }

     void operator++ (void){
         cout<<"Pre-Increment : "<<++a<<endl;
    }

    void operator++ (int){
        cout<<"Post-Increment : "<<a++<<endl;
    }
};

int main(){

    Unary u;

    u--;
    --u;

    u++;
    ++u;
}
