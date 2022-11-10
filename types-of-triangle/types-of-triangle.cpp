#include <iostream>

using namespace std;

int main()
{
    float base, height, angle1, angle2, angle3, area;
    string ans;

    cout << "\n";
    cout << "Area of the Triangle Calculator \n\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n";
    cout << "Do you want to use the calculator? (Y/N) ";
    cin >> ans;
    cout << "\n";

    if (ans == "Y" || ans == "y")
    {
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the height: ";
        cin >> height;
        cout << "Angle 1: ";
        cin >> angle1;
        cout << "Angle 2: ";
        cin >> angle2;
        cout << "Angle 3: ";
        cin >> angle3;
        cout << "\n";

        area = 0.5 * base * height;

        cout << "The area of the triangle is " << area << "\n\n";

        if (angle1 == 90 || angle2 == 90 || angle3 == 90)
        {
            cout << "Type: Right Traingle. \n\n";
        }
        else if (angle1 < 90 && angle2 < 90 && angle3 < 90)
        {
          cout << "Type: Acute Traingle. \n\n";
        }
        else if (angle1 > 90 || angle2 > 90 || angle3 > 90)
        {
        cout << "Type: Obtuse Triangle. \n\n";
        }

        cout << "Thank you for using the calculator!! \n\n";
    }
    else
    {
        cout << "Ok, Bye! \n";
    }

    

    return 0;
}