#include <iostream>

using namespace std;

int main()
{
    float shampoo, coffee, powderedMilk, noodles, egg, total, money, change;

    cout << "\n";
    cout << "You have bought the following: \n\n";
    cout << "Shampoo - P8.00 \n";
    cout << "Coffee - P13.00 \n";
    cout << "Powdered Milk - P12.00 \n";
    cout << "Noodles - P12.00 \n";
    cout << "Egg - P8.00 per piece \n\n";

    shampoo = 8.00;
    coffee = 13.00;
    powderedMilk = 12.00;
    noodles = 12.00;
    egg = 8.00;
    total = shampoo + coffee + powderedMilk + noodles + egg;

    cout << "Enter the amount of your money: P";
    cin >> money;
    cout << "\n";

    change = money - total;

    if (money < total)
    {
        cout << "Youe money is probably insufficient. Please try again. \n";
    }
    else
    {
        cout << "Change: P" << change << "\n\n";
        cout << "Thank you for buying!! \n\n";
    }
    

    return 0;
}