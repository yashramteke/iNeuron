/*Q10. Check if given Strings can be made equal by inserting at most 1 String using deque.*/

#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

deque <char>  charDeque(deque <string> s1);
deque <char> areSame(deque <char> X, deque <char> Y);

int main()
{
    deque <string> s1 = {"My Name Is Yash"};
    deque <string> s2 = {"My Yash"};

    deque <char> X, Y;

    X = charDeque(s1);
    Y = charDeque(s2);

    Y = areSame(X, Y);

    if(X.size() == Y.size())
    {
        for(char x : X) cout<<x;
        cout<<endl;
        for(char x : Y) cout<<x;
    }
    else
    {
        cout<<"string 2 is wrong";
    }

}

deque <char> charDeque(deque <string> s1)
{
    string word = s1[0];
    deque <char> X;

    int size = word.length();

    for(int i = 0; i < size; i++)
    {
        X.push_back(word[i]);
    }

    return X;
}


deque <char> areSame(deque <char> X, deque <char> Y)
{
    int flag = 1;
    int i = 0;
    int Xj = X.size() - 1;
    int Yj = Y.size() - 1;

    //checking first word
    while(true)
    {
        if(X[i] == Y[i])
        {
            if(X[i] == ' ')
            {
                break;
            }
            else
            {
                i = i + 1;

            }
        }
        else
        {
            return Y;
        }
    }

    //checking last word
    while(true)
    {
        if(X[Xj] == Y[Yj])
        {
            if(X[Xj] == ' ')
            {
                break;
            }
            else
            {
                Xj = Xj - 1;
                Yj = Yj - 1;
            }
        }
        else
        {
            return Y;
        }
    }

    deque <char>::iterator Yit = Y.begin() + i + 1;
    deque <char>::iterator Xit_begin = X.begin() + i + 1;
    deque <char>::iterator Xit_end = X.begin() + Xj + 1;

    Y.insert(Yit, Xit_begin, Xit_end);

    return Y;
}

