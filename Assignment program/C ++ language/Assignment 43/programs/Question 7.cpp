/*Q7. Given two sorted arrays A[] and B[] of sizes N and M respectively, the task is to
merge them in a sorted manner using priority_queue.
Example:
Input: A[] = { 5, 6, 8 }, B[] = { 4, 7, 8 }
Output: 4 5 6 7 8 8*/

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue < int, vector<int>, greater<int> > q;

    int N, M;
    N = M = 0;

    cout<<"Enter size of 1st array and 2nd array = ";
    cin>>N>>M;

    int A[N], B[M];

    cout<<"Enter element in 1st array"<<endl;
    for(int i = 0; i < N; i++)
    {
        cin>>A[i];
    }

    cout<<"Enter element in 2nd array"<<endl;
    for(int i = 0; i < M; i++)
    {
        cin>>B[i];
    }

    for(int i = 0; i < N; i++)
    {
        q.push( A[i] );
    }

    for(int i = 0; i < M; i++)
    {
        q.push( B[i] );
    }

    cout<<endl<<endl;
    while(!q.empty())
    {
        cout<<q.top();
        q.pop();
    }

}
