/*Q3. Write a C++ program to calculate the percentage of a student using multi-level inheritance.
Accept the marks of three subjects in base class.
A class will be derived from the above mentioned class which includes a function to find the total marks obtained
and another class derived from this class which calculates and displays the percentage of students.*/

#include <iostream>
using namespace std;

class Marks {

private:
    float math, english, science;

public:
    void Input_Marks(void);

    float s_math(void) {
        return math;
    }
    float s_english(void) {
        return english;
    }
    float s_science(void) {
        return science;
    }
};

void Marks::Input_Marks(void) {

    cout<<"Enter Marks of Following Subjects : "<<endl;

    cout<<"\tMath : ";
    cin>>math;

    cout<<"\tEnglish : ";
    cin>>english;

    cout<<"\tScience : ";
    cin>>science;
}

class Total:public Marks {

private:
    float m, e, s, total;
public:

    void Marks_Obtain(void);
    float s_total(void) {
        return total;
    }
};

void Total::Marks_Obtain(void) {

    m = s_math();
    e = s_english();
    s = s_science();

    cout<<endl;

    cout<<"Maths = "<<m<<" Out of 100"<<endl;
    cout<<"English = "<<e<<" Out of 100"<<endl;
    cout<<"Science = "<<s<<" Out of 100"<<endl;

    cout<<endl;

    total = m+e+s;
    cout<<"Total Marks : "<<total<<" Out of 300"<<endl;
}

class Calculate:public Total {

private:
    float percentage;

public:
    void disp(void) {

        cout<<endl;

        percentage = (s_total() / 300.0) * 100.0;
        cout<<"Percentage : "<<percentage;
    }
};
int main() {
    Calculate c;

    c.Input_Marks();
    c.Marks_Obtain();
    c.disp();

}
