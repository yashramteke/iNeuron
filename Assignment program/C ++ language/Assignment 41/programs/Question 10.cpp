/*Q10. Given an array, print the Next Greater Element (NGE) for every element using stack.
Example:
Input: arr[] = [ 4 , 5 , 2 , 25 ]
Output: 4 –> 5
5 –> 25
2 –> 25
25 –> -1*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int arr[] = {4, 5, 2, 25};
    stack <int> s;

    int j = 3;

    for(int i = 3; i > -1; i--)
    {
        if(i == 3)
        {
            s.push(-1);
        }
        else
        {
            if(arr[i] < arr[j])
            {
                s.push(arr[j]);
                j = j - 1;
            }
            else
            {
                for(int k = j + 1; k < 4; k++)
                {
                    if(arr[i] < arr[k])
                    {
                        s.push(arr[k]);
                        j = j - 1;
                    }
                }

            }

        }
    }

    for( int i = 0; !s.empty(); i++)
    {
        cout<<arr[i]<<" -> "<<s.top()<<endl;
        s.pop();
    }
}
