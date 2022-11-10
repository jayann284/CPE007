#include <iostream>

using namespace std;

int main()
{
    string first_name, last_name;
    char middle_initial;
    float age, gradeMath, gradeScience, gradeFilipino, gradeEnglish, gradePE;

    cout << "\n";
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your middle initial: ";
    cin >> middle_initial;
    cout << "Enter your last name: ";
    cin >> last_name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "\n";
    cout << "What is your grade in Math? ";
    cin >> gradeMath;
    cout << "What is your grade in Science? ";
    cin >> gradeScience;
    cout << "What is your grade in Filipino? ";
    cin >> gradeFilipino;
    cout << "What is your grade in English? ";
    cin >> gradeEnglish;
    cout << "What is your grade in P.E.? ";
    cin >> gradePE;
    cout << "\n";

    float totalGrade = (gradeMath + gradeEnglish + gradeFilipino + gradePE + gradeScience) / 5;
  
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Welcome to C++ Programming " << first_name << " " << middle_initial << ". " << last_name << "!" << endl;
    cout << "Your age is " << age << "." << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "\n";
    cout << "Your grade is " << totalGrade << "\n \n";
    return 0;
}