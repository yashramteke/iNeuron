/*Q9.Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/

#include <iostream>
#include <conio.h>
using namespace std;

class Student{
	private:
		int id;
		string name;
	
	public:
		void setStudata(void){
			cout<<"Enter id : ";
			cin>>id;
			cin.ignore();
			
			cout<<"Enter name : ";
			getline(cin, name);
		}
		
		void dispStudata(void){
			cout<<"Id : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
		}
};

class StudentExam: public Student{
		private:
			float mark[6];
			
		public:
			void setMarkdata(void){
				for(int i=0; i < 6; i++){
					cout<<"Enter Subject "<<i+1<<" : ";
					cin>>mark[i];
				}
			}
			
			void dispMarkdata(void){
				for(int i=0; i < 6; i++){
					cout<<"Subject "<<i+1<<" : "<<mark[i]<<endl;
				}
			}

			float retMark(int i){
				return mark[i];
			}
};

class StudentResult: public StudentExam{
	private:
		float percentage, total=0;
	
	public:
		void dispResult(void){
			for(int i = 0; i < 6; i++){
				total = total + retMark(i);
			}
			percentage = total/6;
			
			cout<< percentage;
		}			
};
int main() {
	int n;
	
	cout<<"Enter number of student you want : ";
	cin>>n;
	cout<<"----------------------------------------------"<<endl;
	
	StudentResult s[n];
	
	for(int i=0; i < n; i++){
		s[i].setStudata();
		s[i].setMarkdata();
	}
	
	cout<<"----------------------------------------------"<<endl;
	cout<<"      ********Student Marksheet********       "<<endl;
	cout<<"----------------------------------------------"<<endl;
	
	for(int i=0; i < n; i++){
		s[i].dispStudata();
		cout<<endl;
		
		s[i].dispMarkdata();
		cout<<endl;
		
		cout<<"Total Percentage : ";
		s[i].dispResult();
		cout<<endl<<"----------------------------------------------"<<endl;
	}	
	getch();
}