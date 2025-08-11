/*Q2. Write a C++ program to read a text file and count the number of characters in it.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	string text;
	int count = 0;

	ifstream fin;

	fin.open("D:/abc.txt");

	while(getline(fin, text)){
		count = count + text.length();
	}

	cout<<"Length : "<<count;

	fin.close();
}
