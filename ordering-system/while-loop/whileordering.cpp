#include <iostream>

using namespace std;

int main()
{
    float TSP = 494, WCS = 648, CP = 824, OLS = 754, PYMH = 468;
    float i, total, change, money;
    string name, book1, book2, book3, book4, book5, order;

    book1 = "TSP";
    book2 = "WCS";
    book3 = "CP";
    book4 = "OLS";
    book5 = "PYMH";

    cout << "\n";
    cout << "Name: ";
    cin >> name;
    cout << "\n";

    cout << "~~~~~~~~~~ Welcome to Jay's Bookstore, " << name << " ~~~~~~~~~~ \n\n";

    cout << "Products: \n\n";
    cout << "- The Silent Patient (by Alex Machaelides): P" << TSP << " (Code: TSP)" << "\n" 
    << "- Where the Crawdads Sing (by Delia Owens): P" << WCS << " (Code: WCS)"  << "\n" 
    << "- Crime and Punishment (by Fyodor Dostoyevsky): P" << CP << " (Code: CP)" << "\n" 
    << "- One Last Stop (by Casey McQuiston): P" << OLS << " (Code: OLS)"  "\n"
    << "- The Five People You Meet in Heaven (by Mitch Albom): P" << PYMH << " (Code: PYMH)" << "\n\n";

    i = 1;

    while (i <= 5)
    {
        cout << "Enter the CODE of the book you want to buy: ";
        cin >> order;
        cout << "Enter 0 to proceed.\n";

        if (order == book1)
        {
            total = TSP + total;
            i++;
        }
        if (order == book2)
        {
            total = WCS + total;
            i++;
        }
        if (order == book3)
        {
            total = CP + total;
            i++;
        }
        if (order == book4)
        {
            total = OLS + total;
            i++;
        }
        if (order == book5)
        {
            total = PYMH + total;
            i++;
        }

        if (order == "0")
        {
            break;
        }
    }

    cout << "\n";
    cout << "Total: P" << total;
    cout << "\n\n";
    cout << "Enter amount for payment: P";
    cin >> money;
    cout << "\n";

    change = money - total;

    cout << "Your change is: P" << change;
    cout << "\n\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    cout << "          Thank you for buying!!\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";

    return 0;
}