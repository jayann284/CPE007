#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int i = 0;

    while (i <= 10)
    {
        cout << i << endl;
        sum = i + sum;
        i++;
    }

    cout << "The sum is: " << sum;

    return 0;
}