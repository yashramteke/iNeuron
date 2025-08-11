/*Q8. In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.*/

#include <iostream>
#include <conio.h>
using namespace std;

class Customer{
	private:
		string name, phone_no;
		
	public:
		void setCustdata(void){
			cout<<"Enter name : ";
			getline(cin, name);
			
			cout<<"Enter phone number : ";
			getline(cin, phone_no);
		}
		
		void dispCustdata(void){
			cout<<"Name : "<<name<<endl;
			cout<<"Phone number : "<<phone_no<<endl;
		}
};

class Depositor: public Customer{
	private:
		string accno;
		float balance;
	
	public:
		void setDepodata(void){
			cout<<"Enter accoutn number : ";
			getline(cin, accno);
			
			cout<<"Enter balance : ";
			cin>>balance;
		}
		
		void dispDepodata(void){
			cout<<"Account number : "<<accno<<endl;
			cout<<"Balance : "<<balance<<endl;
		}
};

class Borrower: public Depositor{
	private:
		int loan_no;
		float loan_amt;
		
	public:
		void setBordata(void){
			cout<<"Enter loan no : ";
			cin>>loan_no;
			
			cout<<"Enter loan amt : ";
			cin>>loan_amt;
		}
		
		void dispBordata(void){
			cout<<"Loan no : "<<loan_no<<endl;
			cout<<"Loan amt : "<<loan_amt<<endl;
		}
};

int main() {
	
	int n;
	
	cout<<"How many customer you want to enter : ";
	cin>>n;
	
	system("cls");
	
	Borrower b[n];
	
	for(int i = 0; i < n; i++){
		cin.ignore();
		
		b[i].setCustdata();
		b[i].setDepodata();
		b[i].setBordata();
		
		cout<<"-------------------------------------"<<endl<<endl;
	}
	
	for(int i = 0; i < n; i++){
		cout<<"Details of custormer"<<endl<<endl;
		
		b[i].dispCustdata();
		b[i].dispDepodata();
		cout<<"-------------------------------------"<<endl<<endl;
		
		b[i].dispBordata();
		cout<<"-------------------------------------"<<endl<<endl;
	}
	
	getch();
}