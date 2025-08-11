/*Q10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, creates an array for number of goals and
number of matches dynamically.*/

#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    int player_no;
    string name;
    int *matches;
    int *goals;

public:
    Player(){}

    Player(int player_no, string name, int total_match)
    {
        this->player_no = player_no;
        this->name = name;

        this->matches = (int *)malloc(sizeof(int) * total_match);
        this->goals = (int *)malloc(sizeof(int) * total_match);

        for(int i=0; i<total_match; i++)
        {
            cout<<"Enter match number : ";
            cin>>matches[i];

            cout<<"Enter goal associate with match : ";
            cin>>goals[i];
        }
    }
};

int main()
{
    Player p1(101, "yash", 3);
}
