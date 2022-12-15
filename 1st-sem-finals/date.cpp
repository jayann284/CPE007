#include <iostream>
#include <string>
#include <string.h>

using namespace std;

//global variables
int borrow; 
int dateBorrowed[3], dateReturned[3];
string date[3] = {"MM: ", "DD: ", "YY: "};

//deaclaration of functions
bool isLeap(int y);
int offsetDays(int d, int m, int y);
void revoffsetDays(int offset, int y, int *d, int *m);
void addDays(int d1, int m1, int y1, int x);

int main() {

    cout << "DATE\n";
    for (int i = 0; i < 3; i++) {
        cout << date[i];
        cin >> dateBorrowed[i];
    }
    cout << endl;

    //calling the function
    addDays(dateBorrowed[1], dateBorrowed[0], dateBorrowed[2], 10);

    return 0;
}

// Return if year is leap year or not.
bool isLeap(int y)
{
    if (y%100 != 0 && y%4 == 0 || y %400 == 0)
        return true;
 
    return false;
}

// Given a date, returns number of days elapsed
// from the  beginning of the current year (1st
// jan).
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

// Given a year and days elapsed in it, finds
// date by storing results in d and m.
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

// Add x days to the given date.
void addDays(int d1, int m1, int y1, int x)
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
    int m2, d2;
    revoffsetDays(offset2, y2, &d2, &m2);
 
    cout << "d2 = " << d2 << ", m2 = " << m2
         << ", y2 = " << y2;
}

//reference: https://www.geeksforgeeks.org/date-after-adding-given-number-of-days-to-the-given-date/
