/*Q2. Create a railways ticket counter and allot ticket to first come first take using c++ STL*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;

    int ch = 0, i = 1;

    while(ch != 3)
    {
        cout<<"1. Insert cumstomer"<<endl;
        cout<<"2. Give ticket"<<endl;
        cout<<"3. Exit"<<endl<<endl;

        cout<<"choice = ";
        cin>>ch;

        switch(ch)
        {
            case 1:
                {
                    q.push(i);
                    i = i + 1;

                    break;
                }
            case 2:
                {
                    if(!q.empty())
                    {
                        cout<<"tickte gave to customer = "<<q.front()<<endl;
                        q.pop();
                    }
                    else
                        cout<<"queue is empty"<<endl;

                    break;
                }
            case 3:
                {
                    exit(0);
                    break;
                }
        }
    }
}
