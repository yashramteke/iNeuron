/*Q3. Write a C++ program to open an output file 'a.txt' and append data to it.*/

#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main() {
    string txt;
	fstream file;

	file.open("D:/a.txt",ios::app);

	if(!file)
		cout<<"File not open";
	else
		cout<<"File successfuly open"<<endl<<endl;

	do{
		cout<<"Enter data to file : ";
		getline(cin, txt);

		if(txt == "-1")
			break;
		else
			file<<txt<<endl;
	}while(file);

	file.close();
}
