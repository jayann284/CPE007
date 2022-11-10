#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter a value for a: ";
    cin >> a;
    cout << "Enter a value for b: ";
    cin >> b;

    if (a <= 180)
    {
        if (b >= 60)
        {
            cout << "Value of a is less than or equal to 180 and b is greater thanor equal to 60 \n";
        }
        else
        {
            cout << "Value of a is NOT less than or equal to 180 and b is NOT greater than or equal to 60 \n";
        }
    }
    else
    {
        if (b >= 60)
        {
            cout << "Value of a is less than or equal to 180 and b is greater than or equal to 60 \n";
        }
        else
        {
            cout << "Value of a is NOT less than or equal to 180 and b is NOT greater than or equal to 60 \n";
        }
    }

    cout << "Exact value of a is: " << a << endl;
    cout << "Exact value of b is: " << b << endl;

    return 0;
}