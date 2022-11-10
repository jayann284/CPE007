#include <iostream>

using namespace std;

int main()
{
    float TSP = 494, WCS = 648, CP = 824, OLS = 754, PYMH = 468;
    float i, total, change, order, money;
    string name;

    cout << "\n";
    cout << "Name: ";
    cin >> name;
    cout << "\n";

    cout << "~~~~~~~~~~ Welcome to Jay's Bookstore, " << name << " ~~~~~~~~~~ \n\n";

    cout << "Products: \n\n";
    cout << "- The Silent Patient (by Alex Machaelides): P" << TSP << "\n" 
    << "- Where the Crawdads Sing (by Delia Owens): P" << WCS << "\n" 
    << "- Crime and Punishment (by Fyodor Dostoyevsky): P" << CP << "\n" 
    << "- One Last Stop (by Casey McQuiston): P" << OLS << "\n" 
    << "- The Five People You Meet in Heaven (by Mitch Albom): P" << PYMH << "\n\n";

    for (i = 1; i <= 5; i++)
    {
        cout << "Enter the amount of the book you chose: P";
        cin >> order;
        cout << "Enter 0 to proceed.\n";

        total = order + total;

        if (order == 0)
        {
            break;
        }
 
    }

    cout << "\n";
    cout << "Enter amount for payment: P";
    cin >> money;
    cout << "\n";

    change = money - total;

    cout << "Your change is: P" << change;
    cout << "\n";

    return 0;
}