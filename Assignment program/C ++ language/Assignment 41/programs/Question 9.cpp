/*Q9. Create back button functionality using stack.*/

#include <iostream>
#include <stack>
#include <limits>

using namespace std;

int main()
{
    stack <string> s;

    int ch = 0;

    while(ch != 3)
    {
        cout<<"1. Go to next page"<<endl;
        cout<<"2. Go to back page"<<endl;
        cout<<"3. Exit"<<endl<<endl;

        cout<<"Enter choice = ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                string str;

                cout<<"Enter page name = ";
                getline(cin, str);

                s.push(str);

                cout<<"Your are in "<<str<<" page"<<endl;

                cin.get();
                break;
            }
        case 2:
            {
                if(!s.empty())
                {
                    if(s.size() == 1)
                    {
                        cout<<"You are in home page"<<endl;
                        s.pop();
                    }
                    else
                    {
                        s.pop();
                        cout<<"You are in "<<s.top()<<" page"<<endl;
                    }
                }
                else
                {
                    cout<<"page not added"<<endl;
                }

                break;
            }
        case 3:
            {
                exit(0);
            }
        }
    }
}
