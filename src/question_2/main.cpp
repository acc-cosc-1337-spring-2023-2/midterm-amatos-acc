#include<iostream>
#include "question2.h"

using std::cout;
using std::cin;

int main()
{
    auto num1 = 0;
    auto num2 = 0;
    auto result = 0;
    auto response = 'y';
    do
    {
        cout<<"Enter number one: ";
        cin>>num1;

        cout<<"Enter number two: ";
        cin>>num2;

        if (num1 >= 1 && num1 <= 200) {
            if (num2 >= 1 && num2 <= 200) {
                result = find_gcd(num1, num2);
                cout<<"The GCD is: "<<result<<"\n";
            } else {
                cout<<"Please enter a number between 1 and 200\n";
            }
        } else {
            cout<<"Please enter a number between 1 and 200\n";
        }
        
        cout<<"Do you want to do it again? (y/n): ";
        cin>>response;

    } while (response == 'y' || response == 'Y');

    cout<<"Exiting...\n";
    
    return 0;
}