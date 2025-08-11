/*Q4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/


#include <iostream>
using namespace std;

class Addition{
    public:
        void add(int, int);
        void add (int, float, float);
};

int main(){

    Addition obj1, obj2, obj3;

    obj1.add(5, 5);
    obj2.add(6, 4.5f, 9);
    obj3.add(5, 4);
}

void Addition::add(int a, int b){

    cout<<"addition is >>> "<<a + b<<endl;
}

void Addition::add(int a, float b, float c=0){

    cout<<"addition is >>> "<<a + b + c<<endl;
}
