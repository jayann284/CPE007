#include <iostream>

using namespace std;

int main()
{
    char grade;

    cout << "Enter Grade: ";
    cin >> grade;

    switch (grade)
    {
        case 'A':
        cout << "Exellent" << endl;
        break;
        case 'B':
        cout << "Very Good!" << endl;
        break;
        case 'C':
        cout << "Well Done!" << endl;
        break;
        case 'D':
        cout << "You Passed!" << endl;
        break;
        case 'E':
        cout << "Very Good!" << endl;
        break;

        default:
        cout << "Invalid Grade!!!" << endl;
    }

    return 0;
}