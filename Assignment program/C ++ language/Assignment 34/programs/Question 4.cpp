/*Q4. Write a program to copy the contents of one text file to another while changing the case of every alphabet.*/

#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;


int main() {

    ifstream fin;
    ofstream fout;

    string text;
    char c;

    fin.open("D:/abc.txt", ios::in);
    fout.open("D:/new.txt", ios::app);

    while(getline(fin, text)) {

        for(int i=0; i<text.length(); i++) {
            if(text[i]>=65 && text[i]<=90) {
                c = tolower(text[i]);
                fout<<c;
            } else if(text[i]>=97 && text[i]<=122) {
                c = toupper(text[i]);
                fout<<c;
            }
        }
    }

    fin.close();
    fout.close();
}
