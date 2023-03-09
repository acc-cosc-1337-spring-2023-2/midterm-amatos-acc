#include<iostream>
#include "question1.h"

using std::cout;
using std::cin;

int main()
{
    auto num = 0;
    auto response = 'y';
    do
    {
        cout<<"Enter a number: ";
        cin>>num;

        if (num >= 1 && num <= 15) {
            cout<<get_fib_sequence(num)<<"\n";
        } else {
            cout<<"Please enter a number between 1 and 15\n";
        }
        cout<<"Do you want to do it again? (y/n): ";
        cin>>response;

    } while (response == 'y' || response == 'Y');

    cout<<"Exiting...\n";
    
    return 0;
}