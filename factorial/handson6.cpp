#include <iostream>

using namespace std;

int main()
{
    int n;
    float factorial = 1.0;

    cout << "Enter a posivitve interger (1-9): ";
    cin >> n;

    if (n < 0 || n > 9)
    {
        cout << "Error. Enter a positive integer (1-9).";
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "The factorial of " << n << " = " << factorial;
    }

    return 0;
}