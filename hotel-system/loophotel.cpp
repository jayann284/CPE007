#include <iostream>

using namespace std;

int main()
{
    float i, total, change, room, money, night;

    cout << "\n";
    cout << "===========================================\n";
    cout << "           Welcome to the Hotel!\n";
    cout << "===========================================\n";
    cout << "\n\n";
    cout << "Room Types: " << endl;
    cout << "Regular - P1,000" << endl;
    cout << "Presidential Suite - P5,000" << endl;
    cout << "The Penthouse - P10,000\n\n";

    for (i = 1; i <= 4; i++)
    {
        cout << "Enter the room price: ";
        cin >> room;

        total = room + total;

        if (room == 0)
        {
            break;
        }

        cout << "How many nights are you staying? ";
        cin >> night;
        
        total = night * total;

        cout << "Enter 0 to proceed.\n\n";
    }

    cout << "\n";
    cout << "Total: " << total;

    cout << "\n\n";
    cout << "Enter amount for payment: P";
    cin >> money;
    cout << "\n";

    change = money - total;

    cout << "Your change is: P" << change;
    cout << "\n\n";

    cout << "===========================================\n";
    cout << "          Thank you for staying!\n";
    cout << "===========================================\n";
    cout << "\n";

    return 0;
}