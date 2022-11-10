#include <iostream>

using namespace std;

int main()
{
   string A, B, C, D, E;
   char grade;

   cout << "Input grade letter: ";
   cin >> grade;

   A = "96-100";
   B = "91-95";
   C = "86-90";
   D = "80-85";
   E = "79 and below";

   switch(grade)
   {
        case 'A':
        cout << "Your grade is in the range of " << A << endl;
        break;
        case 'B':
        cout << "Your grade is in the range of " << B << endl;
        break;
        case 'C':
        cout << "Your grade is in the range of " << C << endl;
        break;
        case 'D':
        cout << "Your grade is in the range of " << D << endl;
        break;
        case 'E':
        cout << "Your grade is in the range of " << E << endl;
        break;

        default:
        cout << "Invalid input.";
    
   }
   
    return 0;
}