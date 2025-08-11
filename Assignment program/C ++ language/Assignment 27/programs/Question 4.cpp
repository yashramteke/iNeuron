/*Q4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.*/

#include <iostream>
using namespace std;

class Time {

	private:
		int hr, min, sec;
	public:
		friend istream &operator>> (istream &in, Time &x);
		friend ostream &operator<< (ostream &out, Time &x);
		friend int operator== (Time &x, Time &y);


};



int main() {

	Time t1, t2;

	cout << "Enter First Time" << endl;
	cout << "-------------------------------" << endl;
	cin >> t1;
	cout << "First Time" << endl << t1;
	cout << endl;

	cout << "Enter Second Time" << endl;
	cout << "-------------------------------" << endl;
	cin >> t2;
	cout << "Second Time" << endl << t2;
	cout << endl;

	if (t1 == t2)
		cout << "Time are same";
	else
		cout << "Time are not same";

}

istream &operator>> (istream &in, Time &x) {

	cout << "Enter Hour : ";
	in >> x.hr;
	cout << endl;

	cout << "Enter Min : ";
	in >> x.min;
	cout << endl;

	cout << "Enter Sec : ";
	in >> x.sec;
	cout << endl;

	return in;
}

ostream &operator<< (ostream &out, Time &x) {

	out << "Hour : " << x.hr << endl;
	out << "Minute : " << x.min << endl;
	out << "Second : " << x.sec << endl;

	return out;
}

int operator== (Time &x, Time &y) {
	if (x.hr == y.hr) {
		if (x.min == y.min) {
			if (x.sec == y.sec)
				return 1;
		}
	}
	return 0;
}