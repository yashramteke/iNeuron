/*Q9. Generate a permutation of first N natural numbers having count of unique adjacent
differences equal to K | Set 2 using a queue.*/

#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    deque <int> f1;

    int N = 0, K = 0, flag = 0;

    cout<<"Enter value of n = ";
    cin>>N;

    cout<<"Enter value of k = ";
    cin>>K;

    if(K < N)
    {
        for(int i = 1; i <= N; i++)
        {
            f1.push_back(i);
        }

        for(; K != 0; K--)
        {
            if(flag == 0)
            {
                cout<<f1.front()<<" ";
                f1.pop_front();
                flag = 1;
            }
            else
            {
                cout<<f1.back()<<" ";
                f1.pop_back();
                flag = 0;
            }
        }

        if(!f1.empty())
        {
            for(int x : f1) cout<<x<<" ";
        }

    }
    else
    {
        cout<<"K should be less then N";
    }
}
