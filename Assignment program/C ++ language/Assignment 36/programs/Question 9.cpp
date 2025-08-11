/*Q9. C++ program to find the integers which come an odd number of times in an array
using C++ STL.*/

#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int, 14> arr = {1, 2, 3, 2, 3, 4, 3, 4, 5, 4, 5, 4, 6, 4};

    int arr_size = arr.size();

    for(int curr = 0; curr < arr_size; curr++)
    {
        int prv = 0;
        bool flag = true;

        if(flag)
        {
             while(prv < curr)
            {
                if(arr[prv] == arr[curr])
                {
                    flag = false;
                    break;
                }
                else
                {
                    prv = prv + 1;
                }
            }
        }

        if(flag)
        {
            int cont = 1;
            int onetime = 1;
            for(int next = curr + 1; next < arr_size; next++)
            {
                if(arr[curr] == arr[next])
                {
                    cont = cont + 1;
                    onetime = 0;
                }
            }

            if(onetime)
            {
                cout<<arr[curr]<<" -> "<<cont<<endl;
            }
            else
            {
                if( (cont%2) > 0 )
                {
                    cout<<arr[curr]<<" -> "<<cont<<endl;
                }
            }
        }
    }



}
