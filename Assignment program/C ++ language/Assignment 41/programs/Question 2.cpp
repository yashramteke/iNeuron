/*Q2. Create a stack of int type, and find the top most element in a stack.*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector <int> v = {10, 20, 30, 40, 50};
    stack <int, vector<int>> s(v);

    cout<<"Top most element = "<<s.top();
}
