/*Q8. A file 'Employee.txt' contains empno and empname. Write a C++ program to add and
read contents of this file and search for an employee whose name is 'XYZ'.*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int ch=5;

    while(ch!=4) {
        cout<<"1. Add data"<<endl;
        cout<<"2. Read data"<<endl;
        cout<<"3. Search data"<<endl;
        cout<<"4. Exit"<<endl<<endl;
        cout<<"Enter choice = ";
        cin>>ch;

        switch(ch) {

        case 1: {
            ofstream fout;
            fout.open("D:/Employee.txt", ios::app);

            string empno, empname;

            cout<<"Enter emp no = ";
            cin>>empno;

            cout<<"Enter emp name = ";
            cin>>empname;

            fout<<"emp no = "<<empno<<endl<<"emp name = "<<empname<<endl;

            fout.close();

            break;
        }
        case 2: {
            ifstream fin;
            fin.open("D:/Employee.txt", ios::in);

            string txt;

            while(getline(fin, txt)) {
                cout<<txt<<endl;
            }

            fin.close();
            break;
        }
        case 3: {
            ifstream fin;
            fin.open("D:/Employee.txt", ios::in);

            string txt, input;
            cout<<"Enter name = ";
            cin>>input;

            while(getline(fin, txt)) {
                if(txt.find(input) != string::npos) {
                    cout<<"emp name found";
                    break;
                }
            }

            fin.close();
            break;
        }
        }
    }
}
