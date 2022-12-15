#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;

// //global variables
// int borrow; 
// string dateBorrowed, dateReturned;
// string booksTitles[10] = {"Moby Dick by Herman Melville", "The Picture of Dorian Gray by Oscar Wilde", "Dune by Frank Herbert", 
// "The Count of Monte Cristo by Alexandre Dumas", "Sense and Sensibility by Jane Austen", "Middlemarch by George Eliot",
// "Crime and Punishment by Fyodor Dostoyevsky", "Don Quixote by Miguel de Cervantes", "The Prelude by William Wordsworth", 
// "Iliad and Odyssey by Homer"};

// //functions
// void studentInfo();
// void book_borrowing_system();

int main() {
    string booksTitles[10] = {"Moby Dick by Herman Melville", "The Picture of Dorian Gray by Oscar Wilde", "Dune by Frank Herbert", 
    "The Count of Monte Cristo by Alexandre Dumas", "Sense and Sensibility by Jane Austen", "Middlemarch by George Eliot",
    "Crime and Punishment by Fyodor Dostoyevsky", "Don Quixote by Miguel de Cervantes", "The Prelude by William Wordsworth", 
    "Iliad and Odyssey by Homer"};
    int borrow;
    string titles[borrow];

    cout << "                               TITLES\n" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "               - " << booksTitles[i] << endl;
    }
    cout << endl;
    
    cout << endl;
    cout << "                   # of books you want to borrow: ";
    cin >> borrow;
    cout << endl;
    cout << "                 List the titles you want to borrow:" << endl;
    

    for (int i = 0; i < borrow; i++) {
        cout << "               - ";
        getline(cin, titles[borrow]);
    }
    cout << endl;
    for (int i = 0; i < borrow; i++){
        cout << "             - " << titles[i] << endl;
    }

    return 0;
}

// void studentInfo() {
//     string name, studentNo, year, program;

//     cout << "Enter your Name: ";
//     getline(cin, name);
//     cout << "Enter your Student No.: ";
//     getline(cin, studentNo);
//     cout << "Enter your year level: ";
//     getline(cin, year);
//     cout << "Enter your Program: ";
//     getline(cin, program);
//     cout << endl;
// }

// void book_borrowing_system() {
//     int borrow;
//     string titles[borrow];

//     for (int i = 0; i < 10; i++) {
//         cout << "- " << booksTitles[i] << endl;
//     }
//     cout << endl;
    
//     cout << endl;
//     cout << "How many book/s you want to borrow? ";
//     cin >> borrow;
//     cout << endl;
//     cout << endl;
//     cout << "List the titles you want to borrow: " << endl;
//     for (int i = 0; i < borrow; i++) {
//         cout << "- ";
//         cin >> titles[borrow];
//     }
//     cout << endl;
// }