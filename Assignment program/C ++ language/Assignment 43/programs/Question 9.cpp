/*Q9. Given three arrays X[], Y[], and Z[] each consisting of N integers, the task is to find
the maximum number of triplets (X[i], Y[i], Z[i]) such that (X[i] < Y[i] < Z[i]) for any
permutation of the three arrays using priority_queue
Input: X = {9, 6, 14, 1, 8}, Y = {2, 10, 3, 12, 11}, Z = {15, 13, 5, 7, 4}
Output: 3
Explanation:
After rearranging the arrays X[], Y[] and Z[] as {1, 6, 8, 9, 14}, {3, 2, 10, 12, 11}, and
{4, 7, 15, 13, 5} respectively. The increasing triplets are {1, 3, 4}, {8, 10, 15} and {9,
12, 13}.
Therefore, the total count of such triplets is 3.*/

#include <iostream>
#include <queue>

using namespace std;
using assending = priority_queue <int, vector<int>, greater<int>>;

int* setArr(int N)
{
    int* arr = new int[N];
    for(int i = 0; i < N; i++)
    {
        cout<<i<<") ";
        cin>>arr[i];
    }

    return arr;
}

void sortArr(int* &arr, int &N, int flag = 0, int element = 0)
{
    assending tmp;

    if(flag == 1)
    {
        for(int i = 0; i < N; i++) //element push in q from array
        {
            if(arr[i] == element)
            {
                continue;
            }
            else
            {
                tmp.push(arr[i]);
            }
        }
        N = tmp.size();
    }
    else
    {
        for(int i = 0; i < N; i++) //element push in q from array
        {
            tmp.push(arr[i]);
        }
    }

    delete[] arr; //delete actual array

    arr = new int[tmp.size()]; //element push in actual array from q
    for(int i = 0; !tmp.empty(); i++)
    {
        arr[i] = tmp.top();
        tmp.pop();
    }
}

bool traverse(int a, int b)
{
    if(a < b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    assending Xq;
    assending Yq;
    assending Zq;

    int* X = nullptr;
    int* Y = nullptr;
    int* Z = nullptr;

    int N = 0, Xn, Yn, Zn;

    cout<<"Enter size of array = ";
    cin>>N;

    Xn = Yn = Zn = N;

    cout<<"Enter data for X"<<endl;
    X = setArr(N);

    cout<<"Enter data for Y"<<endl;
    Y = setArr(N);

    cout<<"Enter data for Z"<<endl;
    Z = setArr(N);

    sortArr(X, N);
    sortArr(Y, N);
    sortArr(Z, N);

    Xn = Yn = Zn = N;

    int i = 0;

    while(i < Xn)
    {
        int flag = 0;

        for(int j = 0; (j < Yn) && (flag == 0); j++)
        {
            if( traverse(X[i], Y[j]) )
            {
                for(int k = 0; (k < Zn) && (flag == 0); k++)
                {
                    if( traverse(Y[j], Z[k]) )
                    {
                        flag = 1;

                        Xq.push(X[i]);
                        Yq.push(Y[j]);
                        Zq.push(Z[k]);

                        sortArr(X, Xn, flag, X[i]);
                        sortArr(Y, Yn, flag, Y[j]);
                        sortArr(Z, Zn, flag, Z[k]);
                    }
                    else
                    {
                        continue;
                    }
                }

            }
            else
            {
                continue;
            }
        }
        if(flag == 0)
        {
            i = i + 1;
        }
        else
        {
            i = 0;
        }
    }


    while(!Xq.empty())
    {
        cout<<"{ "<<Xq.top()<<", "<<Yq.top()<<", "<<Zq.top()<<" }"<<endl;
        Xq.pop();
        Yq.pop();
        Zq.pop();
    }

    delete[] X;
    delete[] Y;
    delete[] Z;
}


