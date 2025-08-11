/*Q4. Iterate a list in reverse order C++ STL*/

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> f ={10, 20, 30, 40, 50};

    list <int>::iterator it = f.end();

    do
    {
        --it;
        cout<<*it<<" ";
    }while(it != f.begin());
}
