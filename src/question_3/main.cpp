#include<iostream>
#include "question3.h"

using std::cout;
using std::cin;

int main()
{
    string input_string = "";
    auto response = 'y';
    bool result = false;

    do
    {
        cout<<"Please enter a string: ";
        cin>>input_string;

        result = is_palindrome(input_string);
        if (result) {
            cout<<"true\n";
        } else {
            cout<<"false\n";
        }
        
        cout<<"Do you want to do it again? (y/n): ";
        cin>>response;

    } while (response == 'y' || response == 'Y');

    cout<<"Exiting...\n";
    
    return 0;
}