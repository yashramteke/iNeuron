/*Q8. Given an array arr[] of N elements, the task is to perform using priority_queue and
the following operation:
●Pick the two largest element from the array and remove these element. If the
elements are unequal then insert the absolute difference of the elements into the
array.
●Perform the above operations until the array has 1 or no element in it. If the array has
only one element left then print that element, else print “-1”.
Example:
Input: arr[] = { 3, 5, 2, 7 }
Output: 1
Explanation:
The two largest elements are 7 and 5. Discard them. Since both are not equal, insert
7 – 5 = 2 into the array. Hence, arr[] = { 3, 2, 2 }
The two largest elements are 3 and 2. Discard them. Since both are not equal, insert
3 – 2 = 1 into the array. Hence, arr[] = { 1, 2 }
The two largest elements are 2 and 1. Discard them. Since both are not equal, insert
2 – 1 = 1 into the array. Hence, arr[] = { 1 }
The only element left is 1. Print the value of the only element left.*/

#include <iostream>
#include <queue>
using namespace std;

int* getArr(int &N, priority_queue <int> &q);
void getQ(int* &arr, int &N, priority_queue <int> &q);
int diff(int &a, int &b);

int main()
{
    int N = 0;

    cout<<"Enter array size = ";
    cin>>N;

    int* arr  = new int[N];

    for(int i = 0; i < N; i++)
    {
        cout<<i<<") = ";
        cin>>arr[i];
    }

    priority_queue <int> q;

    while(N > 1 )
    {
        getQ(arr, N, q); // copy arr -> q
        delete[] arr;

        int a = q.top(); q.pop();
        int b = q.top(); q.pop();
        int c = diff(a, b);

        if(c != 0)
        {
            q.push(c);
        }
        N = q.size();
        arr = getArr(N, q);
    }

    if(arr != nullptr)
    {
        cout<<arr[0];
        delete[] arr;
    }
    else
    {
        cout<<-1;
    }
}

int* getArr(int &N, priority_queue <int> &q)
{
    if(N == 0)
    {
        return nullptr;
    }
    else
    {
        int* arr = new int[N];

        for(int i = 0; i < N; i++)
        {
        arr[i] = q.top(); q.pop(); //insert element in  new array and queue is emtpy
        }

        return arr;
    }

}

void getQ(int* &arr, int &N, priority_queue <int> &q)
{

    for(int i = 0; i < N; i++)
    {
        q.push(arr[i]);
    }
}

int diff(int &a, int &b)
{
    return (a == b) ? 0 : a - b;
}

