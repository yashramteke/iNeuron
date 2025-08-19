/*Q9. Given two maps map1 and map2 having a string as the key and arrays of integers as
values, the task is to merge them in one map such that if a key is common in both the
maps, the respective arrays should be merged.
Example:
Input: map1 = { (“key1”, {0, 1}), (“key2”, {0, 1}) }, map2 = { (“key2”, {1, 2}) };
Output: { (key1, {0, 1}), (key2, {0, 1, 2}) }
Explanation: After merging key1 array will become {0, 1} and for key2 after merging
array will become {0, 1, 2}*/

#include <iostream>
#include <map>
#include <string>
#include <array>
#include <set>
using namespace std;

int main()
{
    map <string, array <int, 2>> map1 = {{"key1",{0, 1}}, {"key2",{0, 1}}};
    map <string, array <int, 2>> map2 = {{"key2", {1, 2}}};

    map <string, set<int>> marge;

    map <string, array<int, 2>>::iterator it1 = map1.begin();

    //checking map1 key is exist or not in map2
    for(; it1 != map1.end(); it1++)
    {
        int flag = 1;
        map <string, array<int, 2>>::iterator it2 = map2.begin();

        for(; it2 != map2.end(); it2++)
        {
            if(it1->first == it2->first) //if key is same then copy data into marge map
            {
                set <int> s;

                for(int i = 0; i < 2; i++)
                {
                    s.insert(it1->second[i]);
                    s.insert(it2->second[i]);
                }

                string key = it1->first;
                marge.insert(make_pair(key, s));

                flag = 1;
                break;
            }
        }
        if(flag) //if key is not same then copy only m1 data
        {
             set <int> s;
            for(int i = 0; i < 2; i++)
            {
                s.insert(it1->second[i]);
            }
            string key = it1->first;
            marge.insert(make_pair(key, s));
        }
    }

    for(auto it1 = marge.begin(); it1 != marge.end(); it1++)
    {
        cout<<it1->first<<" : ";
        for(int x : it1->second) cout<<x<<" ";
        cout<<endl;
    }
}
