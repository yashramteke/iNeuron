/*Q5. Write a C++ program to merge the two files.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream fin;
    ofstream fout;

    string txt;

    fin.open("D:/first.txt", ios::in);
    fout.open("D:/new.txt", ios::app);

    while(getline(fin, txt)){
        fout<<txt<<endl;
    }

    fin.close();

    fin.open("D:/second.txt", ios::in);

    while(getline(fin, txt)){
        fout<<txt<<endl;
    }

    fin.close();
    fout.close();

}
