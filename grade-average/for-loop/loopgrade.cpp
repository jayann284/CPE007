#include <iostream>

using namespace std;

int main()
{
    float grade, subject, total, average;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    for (subject = 1; subject <= 5; subject++)
    {
        cout << "Enter your grade: ";
        cin >> grade;

        total = grade + total;
    }
    
    average = total / 5;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Your grade average is: " << average << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    return 0;
}