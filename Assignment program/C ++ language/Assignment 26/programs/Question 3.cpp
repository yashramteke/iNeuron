//Q3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include <iostream>
using namespace std;

class Cube{

    private:
        float a;
    public:
        Cube(float x){
            a = x;
        }

        void showData(void){
            cout<< "Volume of cube : "<<a*a*a;
        }
};

int main() {

    Cube c(2);

    c.showData();
}
