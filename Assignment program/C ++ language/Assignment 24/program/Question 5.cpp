//Q5. Define a function to check whether a given number is a term in a Fibonacci series or not.

#include <iostream>
using namespace std;

void chkFibonacci(void);

int main() {

	chkFibonacci();

}

void chkFibonacci(void) {

	int prv = 0, nxt = 1, num;

	cout << "Enter number : ";
	cin >> num;

	while (num > nxt) {

		cout << prv + nxt << " ";

		nxt = prv + nxt;
		prv = nxt - prv;
	}
	cout << endl << endl;
	if (num == nxt)
		cout << "Number is in Fibonacci";
	else
		cout << "Number is not in Fibonacci";
}