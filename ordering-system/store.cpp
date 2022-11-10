#include <iostream>

using namespace std;

int main()
{
    float book1 = 494.35, book2 = 648.50, book3 = 824.99, book4 = 754.50, book5 = 468.99, book6 = 825.50, book7 = 936.50;
    float Money, change, totalBill, payment;
    float dec1, dec2, dec3, dec4, dec5, dec6, dec7;
    float book_one, book_two, book_three, book_four, book_five, book_six, book_seven;
    string name;
    
    cout << "\n";
    cout << "Enter your name: ";
    cin >> name;
    cout << "\n";

    cout << "~~~~~~~~~~ Welcome to Jay's Bookstore, " << name << " ~~~~~~~~~~ \n\n";

    cout << "Products: \n\n";
    cout << "- The Silent Patient (by Alex Machaelides): P" << book1 << "\n" << "- Where the Crawdads Sing (by Delia Owens): P" 
    << book2 << "\n" << "- Crime and Punishment (by Fyodor Dostoyevsky): P" << book3 << "\n" 
    << "- One Last Stop (by Casey McQuiston): P" << book4 << "\n" << "- The Five People You Meet in Heaven (by Mitch Albom): P" 
    << book5 << "\n" << "- Kim Jiyoung, Born 1982 (by Cho Nam-Joo): P" << book6 << "\n" 
    << "- When Breath Becomes Air (by Paul Kalanithi): P" << book7 << "\n\n";

    cout << "Please enter how many do you want to buy per book after the titles. \n\n";

    cout << "The Silent Patient (by Alex Machaelides): ";
    cin >> dec1;
    
    cout << "Where the Crawdads Sing (by Delia Owens): ";
    cin >> dec2;

    cout << "Crime and Punishment (by Fyodor Dostoyevsky): ";
    cin >> dec3;

    cout << "One Last Stop (by Casey McQuiston): ";
    cin >> dec4;

    cout << "The Five People You Meet in Heaven (by Mitch Albom): ";
    cin >> dec5;

    cout << "Kim Jiyoung, Born 1982 (by Cho Nam-Joo): ";
    cin >> dec6;

    cout << "When Breath Becomes Air (by Paul Kalanithi): ";
    cin >> dec7;

    cout << "\n\n";

    book_one = dec1 * book1;
    book_two = dec2 * book2;
    book_three = dec3 * book3;
    book_four = dec4 * book4;
    book_five = dec5 * book5;
    book_six = dec6 * book6;
    book_seven = dec7 * book7;

    cout << "~~~~~~~~~~ " << name << "'s Receipt ~~~~~~~~~~ \n\n";
    cout << "Your Orders: \n\n";
    cout << "The Silent Patient (by Alex Machaelides): " << dec1 << "\n";
    cout << "Where the Crawdads Sing (by Delia Owens): " << dec2 << "\n";
    cout << "Crime and Punishment (by Fyodor Dostoyevsky): " << dec3 << "\n";
    cout << "One Last Stop (by Casey McQuiston): " << dec4 << "\n";
    cout << "The Five People You Meet in Heaven (by Mitch Albom): " << dec5 << "\n";
    cout << "Kim Jiyoung, Born 1982 (by Cho Nam-Joo): " << dec6 << "\n";
    cout << "When Breath Becomes Air (by Paul Kalanithi): " << dec7 << "\n\n";

    totalBill = book_one + book_two + book_three + book_four + book_five + book_six + book_seven;
    cout << "Total Bill: " << totalBill << "\n";

    cout << "Enter amount for payment: ";
    cin >> payment;
    cout << "\n";

    change = payment - totalBill;
    cout << "Change: " << change << "\n\n";
    
    cout << "~~~~~~~~~~ Thank You for Coming " << name << "!! ~~~~~~~~~~ \n\n";

    return 0;
}