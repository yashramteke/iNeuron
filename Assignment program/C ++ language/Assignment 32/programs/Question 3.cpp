/*Q3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class.*/

#include <iostream>
using namespace std;

class Animals{
public:
    void sound(void);
};

class Dogs:public Animals{
public:
    void sound(void);
};

int main(){
    Dogs d;
    d.sound();
}

void Animals::sound(void){ cout<<"Animal class"<<endl; }
void Dogs::sound(void){ cout<<"Dogs class"<<endl; }
