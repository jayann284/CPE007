#include <iostream>

using namespace std;

int main()
{
    string name, gender, desire;
    float age, money, totalBill, change, daysCommon, daysPent, daysPresident;
    float common, pentHouse, presidential, totalCommon, totalPent, totalPresident;

    common = 4999.99;
    pentHouse = 9999.99;
    presidential = 14999.99;

    cout << "\n\n";
    cout << "~~~~~~~~~~~~~~~ Welcome to Jay's Hotel ~~~~~~~~~~~~~~~\n\n";
    cout << "Please enter your name: ";
    cin >> name;
    cout << "\n";

    cout << "~~~~~~~~~~~~~~~ Welcome to Jay's Hotel, " << name << "!! ~~~~~~~~~~~~~~~\n\n";
    cout << "Age: ";
    cin >> age;
    cout << "Gender (M for Male or F for Female): ";
    cin >> gender;
    cout << "\n";


    cout << "~~~~~~~~~~~~~~~ Here are our accomodations, " << name << " ~~~~~~~~~~~~~~~\n\n";
    cout << "The Commoners Room || P4,999.99\n";
    cout << "The Penthouse || P9,999.99\n";
    cout << "The Presidential Suite || P14,999.00\n\n";

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    cout << "How many days do you want to stay in The Commoners Room? ";
    cin >> daysCommon;
    cout << "How many days do you want to stay in The Penthouse? ";
    cin >> daysPent;
    cout << "How many days do you want to stay in The Presidential Suite? ";
    cin >> daysPresident;
    cout << "\n\n";

    totalCommon = daysCommon * common;
    totalPent = daysPent * pentHouse;
    totalPresident = daysPresident * presidential;

    totalBill = totalCommon + totalPent + totalPresident;

    cout << "~~~~~~~~~~~~~~~ Your Accomodation Receipt ~~~~~~~~~~~~~~~\n\n";
    cout << "The Commoners Room || Days: " << daysCommon << endl;
    cout << "The Penthouse || Days: " << daysPent  << endl;
    cout << "The Presidential Suite || Days: " << daysPresident << "\n\n";

    cout << "Your Total Bill: " << totalBill << "\n";
    cout << "Payment amount: ";
    cin >> money;
    cout << "\n";

    change = money - totalBill;

    cout << "Change: P" << change;
    cout << "\n\n";

    cout << "~~~~~~~~~~~~~~~ Summary ~~~~~~~~~~~~~~~\n\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "The Commoners Room || Days: " << daysCommon;
    cout << "The Penthouse || Days: " << daysPent;
    cout << "The Presidential Suite || Days: " << daysPresident << "\n\n";

    cout << "Your Total Bill: P" << totalBill << endl;
    cout << "Amount paid: P" << change << endl;
    cout << "Change: P" << change << endl;

    cout << "~~~~~~~~~~~~~~~ Thank You for Visiting, " << name << " ~~~~~~~~~~~~~~~\n\n";
    cout << "~~~~~~~~~~~~~~~ Come Again ~~~~~~~~~~~~~~~\n\n";

    return 0;
}