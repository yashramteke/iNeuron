/*Q8. Given a string s of length N, containing digits written in words but in jumbled form, the
task is to find out the digits present in the string in word form and arrange them in
sorted order using map
Example:
Input: s = “ozerotwneozero”
Output: 0012
Explanation: The string can be arranged as “zerozeroonetwo”.
Therefore the digits are 0, 0, 1 and 2.*/

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void sortDigit(string s)
{
    map <char, int> freq;
    vector <int> v;

    for(char ch : s)
    {
        freq[ch]++;
    }

    //unique letters from 0 to 9
    while(freq['z'] > 0)   // z -> zero (0)
    {
        freq['z']--; freq['e']--; freq['r']--; freq['o']--;
        v.push_back(0);
    }
    while(freq['w'] > 0)   // w -> two (2)
    {
        freq['t']--; freq['w']--; freq['o']--;
        v.push_back(2);
    }
    while(freq['u'] > 0)   // u -> four (4)
    {
        freq['f']--; freq['o']--; freq['u']--; freq['r']--;
        v.push_back(4);
    }
    while(freq['x'] > 0)   // x -> six (6)
    {
        freq['s']--; freq['i']--; freq['x']--;
        v.push_back(6);
    }
    while (freq['g'] > 0) // g -> eight (8)
    {
        freq['e']--; freq['i']--; freq['g']--; freq['h']--; freq['t']--;
        v.push_back(8);
    }

    //after removing unique elements (0, 2, 4, 6, 8). remaining elements is = 1, 3, 5, 7, 9
    while (freq['o'] > 0) // o -> one (1) [after 0, 2, 4 removed]
    {
        v.push_back(1);
        freq['o']--; freq['n']--; freq['e']--;
    }
    while (freq['h'] > 0) // h -> three (3) [after eight removed]
    {
        v.push_back(3);
        freq['t']--; freq['h']--; freq['r']--; freq['e']--; freq['e']--;
    }
    while (freq['f'] > 0) // f -> five (5) [after four removed]
    {
        v.push_back(5);
        freq['f']--; freq['i']--; freq['v']--; freq['e']--;
    }
    while (freq['s'] > 0) // s -> seven (7) [after six removed]
    {
        v.push_back(7);
        freq['s']--; freq['e']--; freq['v']--; freq['e']--; freq['n']--;
    }
    while (freq['i'] > 0) // i -> nine (9) [after 5, 6, 8 removed]
    {
        v.push_back(9);
        freq['n']--; freq['i']--; freq['n']--; freq['e']--;
    }

    //sorting vector
    sort(v.begin(), v.end());

    for(int x : v) cout<<x;
}

int main()
{
   string s = "ozerotwneozero";

   sortDigit(s);
}

