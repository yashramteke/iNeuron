/*Q10. Write a C++ program to create a file which has information Name, Account number,
Balance and perform following operations:
a. Add record
b. Display content of file
c. Display name of person having balance > 10,000*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
private:
    string name, acc, bal;
    string person = "person.dat";
    ifstream fin;
    ofstream fout;

public:
    void checkFile()
    {
        fin.open(person, ios::in);

        if(fin)
        {
            fin.close();
        }
        else
        {
            fout.open(person, ios::out);
            fout.close();
            cout<<"File is empty";
        }
    }
    void addRecord()
    {
        checkFile();

        fout.open(person, ios::app);
        fout.seekp(0, ios::end);

        cout<<"Enter Name: ";
        cin>>name;
        fout<<"Name: "<<name<<endl;

        cout<<"Enter Account Number: ";
        cin>>acc;
        fout<<"Account Number: "<<acc<<endl;

        cout<<"Enter Balance: ";
        cin>>bal;
        fout<<"Balance: "<<bal<<endl;

        fout<<"-------------------------------"<<endl;

        fout.close();
    }
    void display()
    {
        checkFile();

        fin.open(person, ios::in);

        string line;

        while(getline(fin, line))
        {
            cout<<line<<endl;
        }
        fin.close();
    }
    void checkBalance()
    {
        checkFile();

        fin.open(person, ios::in);

        int total_data = 0;

        string line;

        while(getline(fin, line))
        {
            total_data = total_data + 1;
        }

        fin.clear();
        fin.seekg(0, ios::beg);

        for(int i = total_data; i; i--)
        {
            getline(fin, name);
            getline(fin, acc);
            getline(fin, bal);
            getline(fin, line);

            if(stoi(bal.substr(9)) > 10000)
            {
                cout<<name<<endl;
            }
            else
            {
                continue;
            }
        }

        fin.close();
    }

};

int main()
{
    int ch = 1;
    Person p;

    while(ch != 4)
    {
        cout<<"1. Add record"<<endl;
        cout<<"2. Display content of file"<<endl;
        cout<<"3. Display name of person having balance > 10,000"<<endl;
        cout<<"4. Exit"<<endl<<endl;

        cout<<"Enter choice >>> ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            {
                p.addRecord();
                break;
            }
        case 2:
            {
                p.display();
                break;
            }
        case 3:
            {
                p.checkBalance();
                break;
            }
        case 4:
            {
                exit(0);
            }
        }
    }
}
