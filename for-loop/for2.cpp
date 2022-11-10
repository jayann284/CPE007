#include <iostream>

using namespace std;

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
        sum = i + sum;
    }

    cout << "The sum is: " << sum;

    return 0;
}