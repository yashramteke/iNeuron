/*Q7. Create a base class called Matrix. Use this class to store 4 int type values that could
be used to calculate determinants and create matrices. Create class
calculate_determinant which will calculate the determinant of a matrix.
Using these classes, calculate the determinant of the matrix.*/

#include <iostream>

using namespace std;

class Matrix
{
private:
    int *ptr;

public:

    Matrix()
    {
        cout<<"matrix";
        ptr = (int *)malloc(sizeof(int) * 4);
    }
    int* setvalue()
    {
        cout<<"Enter a, b, c, d = ";

        for(int i = 0; i < 4; i++)
        {
            cin>>ptr[i];
        }

        return ptr;
    }
};

class calculate_determinant: public Matrix
{
public:
    int calculate()
    {
        int*ptr= setvalue();

        int ans = (ptr[0] * ptr[3]) - (ptr[1] * ptr[2]);

        return ans;
    }
};

int main()
{
    calculate_determinant obj;

    cout<<obj.calculate();
}
