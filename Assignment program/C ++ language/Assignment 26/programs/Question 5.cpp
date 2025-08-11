//Q5. Define a class Date and write a program to Display Date and initialise date object using Constructors.

#include <iostream>
using namespace std;

class Date{

private:
    int d, m, y;
public:
    Date(){
        d = 13;
        m = 03;
        y = 2024;
    }

    void show(){
        cout<<d<<"/"<<m<<"/"<<y;
    }
};

int main(){
    Date date;

    date.show();
}
