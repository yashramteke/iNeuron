/*Q10. Given an array arr[] of size N and a number K, the task is to find the length of the
smallest subsequence such that the sum of the subsequence is greater than or equal
to number K do it using priority_queue.
Example:
Input: arr[] = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5}, K = 35
Output: 4
Smallest subsequence with the sum greater than or equal to the given sum K is {7, 9,
14, 10}
Input: arr[] = {1, 2, 2, 2, 3, 4, 5, 4, 7, 6, 5, 12}, K = 70
Output:-1
Subsequence with sum greater than equal to the given sum is not possible.*/

#include <iostream>
#include <queue>
using namespace std;

int main() {

    int N = 0;
    int K = 35;
    int sum = 0, cont = 0;

    cout<<"Enter size of array = ";
    cin>>N;

    cout<<"Enter K value = ";
    cin>>K;

    int arr[N]={2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5};

    priority_queue <int> q;

    for(int i = 0; i < N; i++)
    {
        cout<<i<<") ";
        cin>>arr[i];
        q.push(arr[i]);
    }

    while(!q.empty())
    {
        sum = sum + q.top(); q.pop();
        cont = cont + 1;

        if(sum >= K)
        {
            cout<<cont;
            break;
        }
    }

    if(sum < K)
    {
        cout<<-1;
    }
}
