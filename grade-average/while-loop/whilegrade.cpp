#include <iostream>

using namespace std;

int main()
{
    float grade, subject, total, average;

    subject = 1;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
    do
    {
        cout << "Enter your grade: ";
        cin >> grade;

        total = grade + total;
        subject++;
    } while (subject <= 5);
    
    average = total / 5;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Your grade average is: " << average << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    return 0;
}