/*Q5. Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance.*/

#include <iostream>
using namespace std;

class A{
private:
    int a;

public:
    A(){ a = 10; cout<<"Class a default constructor called"<<endl; }
};

class B:public A{
private:
    int b;

public:
    B(){
        b = 20;
        cout<<"class b default constructor called"<<endl;
    }
    B(int tmp){
        b = tmp;
        cout<<"parameterized constructor called"<<endl;
    }
    B(B &tmp){
        b = tmp.b;
        cout<<"copy constructor called"<<endl;
    }

    void disp(void){
        cout<<b<<endl;
    }
};

int main(){

B b1;
b1.disp();
cout<<"-----------------"<<endl;
B b2(50);
b2.disp();
cout<<"-----------------"<<endl;
B b3(b2);
b3.disp();

}
