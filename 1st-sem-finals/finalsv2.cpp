#include <iostream>
#include <string.h>

using namespace std;

//global variables
string name, studentNo, year, program;
float fine = 10.00;
float ctrl, total, totalFine, dayFine, bookFine, payment, change;
int borrow; 
int dateBorrowed[3], dateReturned[3];
string date[3] = {"                              MM: ", "                              DD: ", "                              YY: "};
string booksTitles[10] = {"Moby Dick by Herman Melville", 
                          "The Picture of Dorian Gray by Oscar Wilde", 
                          "Dune by Frank Herbert", 
                          "The Count of Monte Cristo by Alexandre Dumas", 
                          "Sense and Sensibility by Jane Austen", 
                          "Middlemarch by George Eliot",
                          "Crime and Punishment by Fyodor Dostoyevsky", 
                          "Don Quixote by Miguel de Cervantes", 
                          "The Prelude by William Wordsworth", 
                          "Iliad and Odyssey by Homer"};

//functions
void studentInfo();
void book_borrowing_system();
void ascii_art();
void returnDate(int dateBorrowed[3]);
bool isLeap(int y);
int offsetDays(int d, int m, int y);
void revoffsetDays(int offset, int y, int *d, int *m);
void addDays_and_fineSystem(int d1, int m1, int y1, int x);

int main() {
    ascii_art();

    studentInfo();
            
    cout << "                            DATE TODAY\n";
    for (int i = 0; i < 3; i++) {
        cout << date[i];
        cin >> dateBorrowed[i];
    }
    cout << endl;

    cout << "                            RETURN DATE\n";
    cout << "                        (maximun of 1 week)\n";
    for (int i = 0; i < 3; i++) {
        cout << date[i];
        cin >> dateReturned[i];
    }
    cout << endl;

    book_borrowing_system();

    return 0;
}


//ascii banner
void ascii_art() {
    cout << R"(
    __    ________  ____  ___    ______  __   _______  _____________________  ___
   / /   /  _/ __ )/ __ \/   |  / __ \ \/ /  / ___/\ \/ / ___/_  __/ ____/  |/  /
  / /    / // __  / /_/ / /| | / /_/ /\  /   \__ \  \  /\__ \ / / / __/ / /|_/ / 
 / /____/ // /_/ / _, _/ ___ |/ _, _/ / /   ___/ /  / /___/ // / / /___/ /  / /  
/_____/___/_____/_/ |_/_/  |_/_/ |_| /_/   /____/  /_//____//_/ /_____/_/  /_/ 

)" << endl;
}

//collects the student's information
void studentInfo() {
    cout << "                       Enter your Name: ";
    //cin >> name;
    getline(cin, name);
    cout << "                Enter your Student No.: ";
    //cin >> studentNo;
    getline(cin, studentNo);
    cout << "                 Enter your year level: ";
    //cin >> year;
    getline(cin, year);
    cout << "                    Enter your Program: ";
    //cin >> program;
    getline(cin, program);
    cout << endl;
}

//book borrowing system and receipt
void book_borrowing_system() {
    int borrow;
    string titles[borrow];

    cout << "                         TITLES AVAILABLE\n" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "               - " << booksTitles[i] << endl;
    }
    cout << endl;
    
    cout << endl;
    cout << "                 # of books you want to borrow: ";
    cin >> borrow;
    cout << endl;
    total = borrow;
    cout << "                 List the titles you want to borrow:" << endl;
    

    for (int i = 0; i < borrow; i++) {
        cout << "                  - ";
        getline(cin >> ws, titles[i]);
    }
    cout << endl;

    titles[borrow];

    cout << "           ==================================================" << endl;
    cout << "           ==================== RECEIPT =====================" << endl;
    cout << "           ==================================================" << endl;
    cout << "            Name: " << name << endl;
    cout << "            Student No.: " << studentNo << endl;
    cout << "            Year Level: " << year << endl;
    cout << "            Program: " << program << endl;
    cout << "           ==================================================" << endl;
    cout << "            BOOK/S BORROWED:" << endl;

    for (int i = 0; i < borrow; i++){
        cout << "             - " << titles[i] << endl;
    }
    cout << "           ==================================================" << endl;
    cout << "            BORROWED DATE";
    cout << "                           ";
    for (int i = 0; i < 3; i++){
        cout << dateBorrowed[i];
        if (i < 2) {
            cout << "/";
        }
    }
    cout << endl << endl;
    
    cout << "            RETURNED DATE";
    cout << "                           ";
    for (int i = 0; i < 3; i++){
        cout << dateReturned[i];
        if (i < 2) {
            cout << "/";
        }
    }
    cout << endl << endl;

    addDays_and_fineSystem(dateBorrowed[1], dateBorrowed[0], dateBorrowed[2], 7);
}

//DATE SEGMENTATION SYSTEM
//Return if year is leap year or not
bool isLeap(int y)
{
    if (y%100 != 0 && y%4 == 0 || y %400 == 0)
        return true;
 
    return false;
}

//Given a date, returns number of days elapsed
//from the  beginning of the current year (1st
//jan)
int offsetDays(int d, int m, int y) {
    int offset = d;

    switch (m - 1)
    {
    case 11:
        offset += 30;
    case 10:
        offset += 31;
    case 9:
        offset += 30;
    case 8:
        offset += 31;
    case 7:
        offset += 31;
    case 6:
        offset += 30;
    case 5:
        offset += 31;
    case 4:
        offset += 30;
    case 3:
        offset += 31;
    case 2:
        offset += 28;
    case 1:
        offset += 31;
    }

    if (isLeap(dateBorrowed[2]) && m > 2){
        offset += 1;
    }

    return offset;
}

//Given a year and days elapsed in it, finds
//date by storing results in d and m
void revoffsetDays(int offset, int y, int *d, int *m)
{
    int month[13] = { 0, 31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31 };
 
    if (isLeap(dateBorrowed[2]))
        month[2] = 29;
 
    int i;
    for (i = 1; i <= 12; i++)
    {
        if (offset <= month[i])
            break;
        offset = offset - month[i];
    }
 
    *d = offset;
    *m = i;
}

//Add x days to the given date
//added the fine system here as well
void addDays_and_fineSystem(int d1, int m1, int y1, int x)
{
    int offset1 = offsetDays(dateBorrowed[1], dateBorrowed[0], dateBorrowed[2]);
    int remDays = isLeap(dateBorrowed[2])?(366-offset1):(365-offset1);
 
    // y2 is going to store result year and
    // offset2 is going to store offset days
    // in result year.
    int y2, offset2;
    if (x <= remDays)
    {
        y2 = y1;
        offset2 = offset1 + x;
    }
 
    else
    {
        // x may store thousands of days.
        // We find correct year and offset
        // in the year.
        x -= remDays;
        y2 = y1 + 1;
        int y2days = isLeap(dateBorrowed[2])?366:365;
        while (x >= y2days)
        {
            x -= y2days;
            y2++;
            y2days = isLeap(dateBorrowed[2])?366:365;
        }
        offset2 = x;
    }
 
    // Find values of day and month from
    // offset of result year.
    // continuation of the receipt with the fine system
    int m2, d2;
    revoffsetDays(offset2, y2, &d2, &m2);
    cout << "            DUE DATE";
    cout << "                                " << m2 << "/" << d2 << "/" << y2 << endl;
    cout << "           ==================================================" << endl;

    ctrl = dateReturned[1] - d2;
    dayFine = ctrl * fine;
    bookFine = total * fine;
    totalFine = dayFine + bookFine;

    if(dateReturned[1] <= d2) {
        cout << "                  Thank you for returning and coming in!" << endl;
        cout << "                              HAPPY READING             " << endl;
        cout << "           ==================================================" << endl;
    }
    else {
        cout << "                        YOU EXCEEDED THE DUE DATE" << endl;
        cout << "                    (10 PHP fine per day and per book)" << endl;
        cout << "           ==================================================" << endl;
        cout << "            Total fee: P" << totalFine<< endl;
        cout << "            Enter payment amount: P";
        cin >> payment;
        if (payment > totalFine) {
            change = payment - totalFine;
            cout << "            Change: P" << change << endl;
            cout << "           ==================================================" << endl;
            cout << "                                 PAID" << endl;
            cout << "           ==================================================" << endl;
            cout << "                  Thank you for returning and coming in!" << endl;
            cout << "                             HAPPY READING" << endl;
            cout << "           ==================================================" << endl;
        }
        else {
            cout << "           ==================================================" << endl;
            cout << "                                 PAID" << endl;
            cout << "           ==================================================" << endl;
            cout << "                  Thank you for returning and coming in!" << endl;
            cout << "                             HAPPY READING" << endl;
            cout << "           ==================================================" << endl;
        }
    }
}


