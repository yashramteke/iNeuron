/*Q9. Converting String into Set in C++ STL*/

#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string s = "hello world";
    set<char> charSet(s.begin(), s.end());


    for (char c : charSet) {
        cout << c << " ";
    }
    cout <<endl;

    return 0;
}
