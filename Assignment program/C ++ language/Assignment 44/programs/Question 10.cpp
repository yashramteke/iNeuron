/*Q10. You have a set of integer s, which originally contains all the numbers from 1 to n.
Unfortunately, due to some error, one of the numbers in s got duplicated to another
number in the set, which results in repetition of one number and loss of another
number.You are given an integer array nums representing the data status of this set
after the error.Find the number that occurs twice and the number that is missing and
return them in the form of an array.You have a set of integer s, which originally contains all the numbers from 1 to n.
Unfortunately, due to some error, one of the numbers in s got duplicated to another
number in the set, which results in repetition of one number and loss of another
number.You are given an integer array nums representing the data status of this set
after the error.Find the number that occurs twice and the number that is missing and
return them in the form of an array.*/

#include <iostream>
#include <set>
#include <array>
using namespace std;

int main() {

    int n = 0;
    int err = 0;

    cout<<"Enter value of n = ";
    cin>>n;


    cout<<"Enter duplicate number = ";
    cin>>err;

    int nums[n];

    for(int i = 0; i < n; i++)//enter data and duplicate value in to array
    {
        if((i + 1) == err)
        {
            nums[i] = i + 1;
            i = i + 1;
            nums[i] = i;
        }
        else
        {
             nums[i] = i + 1;
        }
    }

   set <int> s;
   for(int i = 0; i < n; i++)//enter data in set
    {
        s.insert(nums[i]);
    }
    set <int>::iterator it = s.begin();

    array <int, 2> ans;
    for(int i = 0; i < n; it++, i++)//finding ans
    {
        if(nums[i] == (*it) && it != s.end())
        {
            continue;
        }
        else
        {
            cout<<"else";
            ans[0] = nums[i];
            ans[1] = nums[i] + 1;
            break;
        }
    }

    cout<<"[ "<<ans[0]<<", "<<ans[1]<<" ]";
}


