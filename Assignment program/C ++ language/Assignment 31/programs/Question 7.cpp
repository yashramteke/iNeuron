/*Q7. Write class declarations and member function definitions for a C++ base class
to represent an Employee (emp-code, name). Derive two classes as Fulltime (daily rate, number of days, salary)
and Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.*/

#include <iostream>
#include <conio.h>
using namespace std;

class Employee {

	private:
		int emp_code;
		string name;

	public:
		void set_employee_data(void) {
			cout << "Enter emp code : ";
			cin >> emp_code;
			cin.ignore();

			cout << "Enter name : ";
			getline(cin, name);
		}

		void emp_disp(void) {

			cout << "Emp code : " << emp_code << endl;

			cout << "Name : " << name << endl;
		}
		
		int code(void){
			return emp_code;
		}

};

class Fulltime: public Employee {

	private:
		float daily_rate, salary, number_of_days;

	public:

		void set_fulltime_data(void) {
			cout << "Enter daily rate : ";
			cin >> daily_rate;

			cout << "Enter number of days : ";
			cin >> number_of_days;

			salary = daily_rate * number_of_days;
		}

		void Full_disp(void) {
			cout << "Daily rate : " << daily_rate << endl;

			cout << "Salary : " << salary << endl;

			cout << "Number of days : " << number_of_days << endl;
		}
};

class Parttime: public Employee {

	private:
		float number_of_working_hours, hourly_rate, salary;

	public:

		void set_parttime_data(void) {
			cout << "Enter number of working hours : ";
			cin >> number_of_working_hours;

			cout << "Enter hourly rate : ";
			cin >>  hourly_rate;

			salary = number_of_working_hours * hourly_rate;
		}

		void Part_disp(void) {

			cout << "Number of working hours : " << number_of_working_hours << endl;

			cout << "Hourly rate : " << hourly_rate << endl;

			cout << "Salary : " << salary << endl;
		}
};

int main() {

	int choice, fn = -1, pn = -1, FN, PN;

	cout<<"How many Fulltime employee you want to enter : ";
	cin>>FN;
	
	cout<<"How many Parttime employee you want to enter : ";
	cin>>PN;

	Fulltime f[FN];
	Parttime p[PN];


	do {
		system("cls");

		cout<<"1. Enter record : "<< endl;
		cout<<"2. Display record : "<<endl;
		cout<<"3. Search record : "<<endl;
		cout<<"4. Exit : "<<endl;
		cout<<"Enter choice : ";
		cin>>choice;

		switch (choice) {

			case 1: {
				system("cls");
				int tmp;

				cout << "1. Fulltime employee" << endl;
				cout << "2. Parttime employee" << endl << endl;

				cout << "Enter your choice : ";
				cin >> tmp;

				if (tmp == 1) {
					system("cls");
					
					if( (fn = fn + 1) < FN){
						f[fn].set_employee_data();
						f[fn].set_fulltime_data();
						
						cout<<"Data saved";
						getch();
					}
					else{
						cout<<"Fulltime employee memory full";
						getch();
					}
					
				} else if (tmp == 2) {
					if( (pn = pn + 1) < PN){
						system("cls");
						
						p[pn].set_employee_data();
						p[pn].set_parttime_data();
						
						cout<<"Data saved";
						getch();
					}
					else{
						cout<<"Parttime employee memory full";
						getch();
					}
				} else {
					cout << "Wrong choice";
					getch();
				}
				break;
			}
			case 2: {
				system("cls");
				
				for(int i = 0; i < FN ; i++){
					f[i].emp_disp();
					f[i].Full_disp();
					
					cout<<endl<<"-------------------------------------"<<endl;
				}	
				
				for(int i = 0; i < FN ; i++){
					p[i].emp_disp();
					p[i].Part_disp();
					
					cout<<endl<<"-------------------------------------"<<endl;
				}
				getch();
				break;
			}
			case 3:{
				system("cls");
				int code, flag=0;
				
				cout<<"Enter employee code : ";
				cin>>code;
				
				for(int i=0; i < FN ; i++){
					if(code == f[i].code()){
						f[i].emp_disp();
						f[i].Full_disp();
					
						cout<<endl<<"-------------------------------------"<<endl;
						getch();
						flag=1;
						break;
					}
				}
				if(flag == 0){
					for(int i=0; i < PN ; i++){
						if(code == p[i].code()){
							p[i].emp_disp();
							p[i].Part_disp();
					
							cout<<endl<<"-------------------------------------"<<endl;
							getch();
							flag=1;
							break;
						}
					}
				}
				if(flag == 0){
					cout<<"Data not found";
					getch();
				}
				break;
			}
			default :{
				if(choice == 4){
					cout<<"Programm exited";
					getch();
				}
				else{
					cout<<"Enter wrong choice";
					getch();
				}
			}
		}
	} while (choice != 4);



}