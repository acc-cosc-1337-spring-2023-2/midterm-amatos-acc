#include<iostream>
#include "question4.h"

using std::cout;
using std::cin;

int main()
{
    auto m = 0;
    auto v = 0;
    auto response = 'y';
    auto energy = 0.0;

    do
    {
        cout<<"Please enter kilograms: ";
        cin>>m;

        if (m > 0) {
            cout<<"Please enter meters per seconds: ";
            cin>>v;
            if (v > 0) {
                energy = get_kinetic_energy(m, v);
                cout<<"The kinetic energy is: "<<energy<<"\n";
            } else {
                cout<<"Velocity must be greater than 0\n";
            }
        } else {
            cout<<"Mass must be greater than 0\n";
        }
        
        cout<<"Do you want to do it again? (y/n): ";
        cin>>response;

    } while (response == 'y' || response == 'Y');

    cout<<"Exiting...\n";
    
    return 0;
}