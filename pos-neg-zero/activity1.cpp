#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "This is a positive integer! \n";
    }
    else if (number == 0)
    {
        cout << "The number is zero \n";
    }
    else 
    {
        cout << "The number is negative! \n";
    }

    return 0;
}