/*Q8. Write a C++ Program to implement push and pop methods from stack using template.*/

#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 60};

    int ch = 0;

    while(ch != 3 )
    {
        cout<<"1. Push element"<<endl;
        cout<<"2. Pop element"<<endl;
        cout<<"3. Exit"<<endl<<endl;

        cout<<"Enter choice >>> ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            {
                int n = 0;

                cout<<"Enter element to push = ";
                cin>>n;

                v.push_back(n);

                cout<<"Push Successfull"<<endl<<endl;

                for(int n:v)
                    cout<<n<<" ";

                getch();

                break;

                cout<<endl<<endl;
            }
        case 2:
            {
                v.pop_back();

                for(int n:v)
                    cout<<n<<" ";

                cout<<"Pop Successfull"<<endl<<endl;

                getch();

                break;

                cout<<endl<<endl;
            }
    }

  }
}
