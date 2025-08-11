/*Q10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.*/

#include <iostream>
#include <conio.h>
using namespace std;

class Worker{
	private:
		int code;
		char name[50];
		float salary;
	
	public:
		void setWorker(void){
			cout<<"Enter code : ";
			cin>>code;
			cin.ignore();
			
			cout<<"Enter name : ";
			gets(name);
			
			cout<<"Enter salary : ";
			cin>>salary;
		}
		
		void dispWorker(void){
			cout<<"Code : "<<code<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Salary : "<<salary<<endl;
		}
		
		float retSal(void){
			return salary;
		}
};

class Officer{
	private:
		float DA, HRA;
	
	public:
		void setOfficer(void){
			cout<<"Enter DA : ";
			cin>>DA;
			
			cout<<"Enter HRA : ";
			cin>>HRA;
		}
		
		void dispOfficer(void){
			cout<<"DA : "<<DA<<endl;
			cout<<"HRA : "<<HRA<<endl;
		}
		
		float retDA_HRA(void){
			return DA+HRA;
		}
};

class Manager: public Worker, public Officer{
	private:
		float TA, Gross_sal;
	
	public:
		void setMangaer(void){
			TA = (retSal() / 100) * 10;
			Gross_sal = TA + retDA_HRA()+retSal();
		}
		
		void dispManager(void){
			cout<<"TA : "<<TA<<endl;
			cout<<"Gross salary : "<<Gross_sal<<endl;
		}
};

int main() {
	
	Manager m;
	
	cout<<"---------------------------------"<<endl;
	m.setWorker();
	m.setOfficer();
	m.setMangaer();
	cout<<"---------------------------------"<<endl;
	cout<<"       Manager Information       "<<endl;
	cout<<"---------------------------------"<<endl;
	m.dispWorker();
	m.dispOfficer();
	m.dispManager();
	
	getch();

	
}