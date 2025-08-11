/*Q10. Given an integer array nums , return an array answer such that answer[i] is equal to
the product of all the elements of nums except nums[i] .*/

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int sum (array <int, 5>& nums, int i);

int main()
{
    array <int, 5> nums = {50, 10, 40, 30, 20};

    for(int i = 0; i < nums.size(); i++)
    {
         int answer = sum(nums, i);

         cout<<"nums["<<i<<"] -> "<<answer<<endl;
    }

}

int sum (array <int, 5>& nums, int i)
{
    int answer = 0;

    for(int j = 0; j < nums.size(); j++)
    {
        if(j == i)
        {
            continue;
        }
        else
        {
            answer = answer + nums[j];
        }
    }

    return answer;
}
