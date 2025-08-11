/*Q2. Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second.
Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/

#include <iostream>
using namespace std;

class Time {

	private:
		int h, m, s;

	public:
		void setTime(int, int, int);
		void showTime(void);
		void normalize(void);
		Time add(Time);
};

int main() {

	Time t;

	int h, m, s;

	cout<<"Enter Hour, Minutes, Seconds : ";
	cin>>h>>m>>s;

	t.setTime(h, m, s);
	t.normalize();

	cout<<"Before Add Function Call : ";
	t.showTime();

	cout<<"After Add Function Call : ";
	t = t.add(t);
	t.showTime();
}

void Time::setTime(int hr, int mi, int sec){

    h = hr;
    m = mi;
    s = sec;
}

void Time::showTime(void){
    cout<<h<<" : "<<m<<" : "<<s;
}

void Time::normalize(void){

        if(s >= 60){
            m += s / 60;
            s %= 60;
        }
        if (m >= 60){
            h += m / 60;
            m %= 60;
        }

}

Time Time::add(Time t){

    Time tmp;

    cout<<"Enter Hour, Minutes, Seconds : ";
	cin>>tmp.h>>tmp.m>>tmp.s;

	tmp.h += t.h;
	tmp.m += t.m;
	tmp.s += t.s;

	tmp.normalize();

	return tmp;
}
