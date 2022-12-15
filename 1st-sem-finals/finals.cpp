#include <iostream>
#include <string>

using namespace std;

//global variables
string booksTitles[10] = {"Moby Dick by Herman Melville", "The Picture of Dorian Gray by Oscar Wilde", "Dune by Frank Herbert", 
"The Count of Monte Cristo by Alexandre Dumas", "Sense and Sensibility by Jane Austen", "Middlemarch by George Eliot",
"Crime and Punishment by Fyodor Dostoyevsky", "Don Quixote by Miguel de Cervantes", "The Prelude by William Wordsworth", 
"Iliad and Odyssey by Homer"};

//functions
void studentInfo();
void book_borrowing_system();
void ascii_art();

int main() {
    string question;

    ascii_art();
    
    studentInfo();    
    book_borrowing_system();

    return 0;
}

void studentInfo() {
    string name, studentNo, year, program;

    cout << "                       Enter your Name: ";
    getline(cin, name);
    cout << "                Enter your Student No.: ";
    getline(cin, studentNo);
    cout << "                 Enter your year level: ";
    getline(cin, year);
    cout << "                    Enter your Program: ";
    getline(cin, program);
    cout << endl;
}

void book_borrowing_system() {
    int borrow;
    string titles[borrow];

    for (int i = 0; i < 10; i++) {
        cout << "                    - " << booksTitles[i] << endl;
    }
    cout << endl;
    
    cout << endl;
    cout << "    How many book/s you want to borrow? ";
    cin >> borrow;
    cout << endl;
    cout << endl;
    cout << "    List the titles you want to borrow: " << endl;
    for (int i = 0; i < borrow; i++) {
        cout << "- ";
        cin >> titles[borrow];
    }
    cout << endl;
}

void ascii_art() {
    cout << R"(
    __    ________  ____  ___    ______  __   _______  _____________________  ___
   / /   /  _/ __ )/ __ \/   |  / __ \ \/ /  / ___/\ \/ / ___/_  __/ ____/  |/  /
  / /    / // __  / /_/ / /| | / /_/ /\  /   \__ \  \  /\__ \ / / / __/ / /|_/ / 
 / /____/ // /_/ / _, _/ ___ |/ _, _/ / /   ___/ /  / /___/ // / / /___/ /  / /  
/_____/___/_____/_/ |_/_/  |_/_/ |_| /_/   /____/  /_//____//_/ /_____/_/  /_/ 

)" << endl;
}