/*Q6. Create a Time class and take Duration in seconds.
Now you need to convert seconds(i.e in int ) to Time class.

Example-
int main()
{
	int duration;
	cout<<”Enter time duration in minutes”;
	cin>>duration;
	Time t1 = duration;
	t1.display();
	return 0;
}*/

#include <iostream>
#include <string.h>

using namespace std;

class Time {

	private:
		int second;

	public:

		Time(int duration) {

			second = duration * 60;
		}

		void disp() {
			cout << "seccond : " << second;
		}
};

int main() {

	int duration;
	cout << "Enter time duration in minutes" << endl;
	cin >> duration;
	Time t1 = duration;
	t1.disp();


}