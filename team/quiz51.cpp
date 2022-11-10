#include <iostream>

using namespace std;

int main()
{
    string name, gender, team;

    cout << endl;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Sex: ";
    cin >> gender;

    if (gender == "female" || gender == "Female")
    {
        cout << "Choose your team (Barbie, Prada or Payless): ";
        cin >> team;

        if (team == "Barbie" || team == "barbie")
        {
            cout << endl;
            cout << "Your name is " << name << " and you choose to be in Team Barbie.";
            cout << endl;
            cout << endl;
        }
        else if (team == "Prada" || team == "prada")
        {
            cout << endl;
            cout << "Your name is " << name << " and you choose to be in Team Prada.";
            cout << endl;
            cout << endl;
        }
        else if (team == "Payless" || team == "payless")
        {
            cout << endl;
            cout << "Your name is " << name << " and you choose to be in Team Payless.";
            cout << endl;
            cout << endl;
        }
        else 
        {
            cout << endl;
            cout << "Invalid Input";
            cout << endl;
            cout << endl;
        }
    }
    else if (gender == "male" || gender == "Male")
    {
        cout << "Choose your team (Jaguar, Eagle or Crocodile): ";
        cin >> team;

        if (team == "Jaguar" || team == "jaguar")
        {
            cout << endl;
            cout << "Your name is " << name << " and you choose to be in Team Jaguar.";
            cout << endl;
            cout << endl;
        }
        else if (team == "Eagle" || team == "eagle")
        {
            cout << endl;
            cout << "Your name is " << name << " and you choose to be in Team Eagle.";
            cout << endl;
            cout << endl;
        }
        else if (team == "Crocodile" || team == "crocodile")
        {
            cout << endl;
            cout << "Your name is " << name << " and you choose to be in Team Crocodile.";
            cout << endl;
            cout << endl;
        }
        else 
        {
            cout << endl;
            cout << "Invalid Input";
            cout << endl;
            cout << endl;
        }
    }

    return 0;
}