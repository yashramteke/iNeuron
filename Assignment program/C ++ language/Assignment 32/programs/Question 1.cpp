/*Q1. Create a class FLOAT that contains one float data member.
Overload all the four arithmetic operators so that they can operate on the objects of FLOAT.*/

#include<iostream>
using namespace std;

class FLOAT{

private:
    float a;

public:
    FLOAT(){
        a = 0.0f;
    }

    void inputData(void);
    float display(void);

    FLOAT operator+(FLOAT);
    FLOAT operator-(FLOAT);
    FLOAT operator*(FLOAT);
    FLOAT operator/(FLOAT);

};

int main()
{
    FLOAT f1, f2, ans;

    cout<<"Addition"<<endl;
    f1.inputData();
    f2.inputData();
    ans = f1 + f2;
    cout<<"f1 + f2 = "<<ans.display()<<endl;
    cout<<"-------------------------------"<<endl;

    cout<<"Subtraction"<<endl;
    f1.inputData();
    f2.inputData();
    ans = f1 - f2;
    cout<<"f1 - f2 = "<<ans.display()<<endl;
    cout<<"-------------------------------"<<endl;

    cout<<"Multiplication"<<endl;
    f1.inputData();
    f2.inputData();
    ans = f1 * f2;
    cout<<"f1 * f2 = "<<ans.display()<<endl;
    cout<<"-------------------------------"<<endl;

    cout<<"Division"<<endl;
    f1.inputData();
    f2.inputData();
    ans = f1 / f2;
    cout<<"f1 / f2 = "<<ans.display()<<endl;
    cout<<"-------------------------------"<<endl;

}

void FLOAT::inputData(void){

    cout<<"Enter a : ";
    cin>>a;
}

float FLOAT::display(void){

    return a;
}

FLOAT FLOAT::operator+(FLOAT tmp){

    tmp.a = a + tmp.a;

    return tmp;
}

FLOAT FLOAT::operator-(FLOAT tmp){

    tmp.a = a - tmp.a;

    return tmp;
}

FLOAT FLOAT::operator*(FLOAT tmp){

    tmp.a = a * tmp.a;

    return tmp;
}

FLOAT FLOAT::operator/(FLOAT tmp){

    tmp.a = a / tmp.a;

    return tmp;
}
