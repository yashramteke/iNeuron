/*Q6. Write a C++ program that counts the total number of characters, words and lines in the file.*/

#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main() {

    ifstream fin;

    string txt;
    int lines, words, characters, space;

    space=lines=words=characters=0;

    fin.open("D:/abc.txt", ios::in);

    while(getline(fin, txt)) {
        lines = lines + 1;

        for(int i=0; txt[i] != '\0'; i++) {

            if(txt[i] != ' ') {
                characters = characters + 1;
                if(txt[i+1] == '\0'){
                    words = words + 1;
                }
            } else {
                words = words + 1;
            }
        }
    }
    cout<<endl<<"Lines = "<<lines<<endl<<"Characters = "<<characters<<endl<<"Words = "<<words;
    fin.close();
}
