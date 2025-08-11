/*Q5. Create a base class called Photon. Use this class to store double type value of
wavelength that could be used to calculate photon energy. Create class
calculate_photonEnergy which will photon energy.
Using these classes, calculate photon energy.*/

#include <iostream>
#include <math.h>
using namespace std;

class Photon
{
private:
    double lambda;
public:

    double input()
    {
        cout<<"Enter wavelength(nm) = ";
        cin>>lambda;
        return lambda;
    }
};

class calculate_photonEnergy: public Photon
{
private:
    double E, c, h;
public:
    calculate_photonEnergy()
    {
        h = 6.626 * pow(10, -34);
        c = 3 * pow(10, 8);
        E = 0;
    }
    void photon_energy()
    {
        E = (h * c)/input();
        cout<<"photon energy "<<E<<" Joule/photon"<<endl<<endl;
    }
};

int main()
{
    calculate_photonEnergy obj;

    obj.photon_energy();
 }
