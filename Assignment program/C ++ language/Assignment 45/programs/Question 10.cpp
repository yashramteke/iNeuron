/*Q10. Unlike a set, a multiset may contain multiple occurrences of same number. The
multiset equivalence problem states to check if two given multisets are equal or not.
For example let A = {1, 2, 3} and B = {1, 1, 2, 3}. Here A is set but B is not (1 occurs
twice in B), whereas A and B are both multisets. More formally, “Are the sets of pairs
defined as \(A' = \{ (a, frequency(a)) | a \in \mathbf{A} \}\) equal for the two given
multisets?” Given two multisets A and B, write a program to check if the two multisets
are equal.*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset <int> A = {1, 2, 3};
    multiset <int> B = {1, 1, 2, 3};

    if(A == B)
    {
        cout<<"multiset are equal";
    }
    else
    {
        cout<<"multiset are not equal";
    }
}
