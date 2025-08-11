/*Q1. Write a C++ program to create a file and print “File created successfully” and throw
an error if file is not created.*/

#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main() {

	ofstream fout;

	fout.open("D:/abc.txt");
	if(!fout){
		cout<<"File not created";
	}
	else{
		cout<<"File created successfully";
	}
	fout.close();
}
