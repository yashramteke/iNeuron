/*Q12. Given a string S containing letters and ‘#‘. The ‘#” represents a backspace. The task
is to print the new string without ‘#‘. String after processing backspace characters
using deque
Examples:
Input : S = "abc#de#f#ghi#jklmn#op#"
Output : abdghjklmo

Input : S = "##iNeuron##Education##hub#"
Output : iNeurEducatihu*/

#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    string S = "##iNeuron##Education##hub#";
    deque <char> d;

   for(int i = 0; i < S.size(); i++)
   {
       if(S[i] == '#')
       {
           if(d.empty())
           {
               continue;
           }
           else
           {
               d.pop_back();
           }
       }
       else
       {
           d.push_back(S[i]);
       }
   }

   for( char x : d)cout<<x;
}
