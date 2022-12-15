#include <iostream>
#include <string>

using namespace std;

string name, number, year_level, course, bookTitles, date, date2, borrow;
	string one, two, three;
	string b1, b2, b3, GW, PB, SBR, order;
	float i, fn, pm, tc;
	int num[3];
	int d, b;
	float n1, n2, n3;
	

void book() {
    for (i = 1; i <= 3;  i++)
  {
    cout << "Enter 0 if you want to proceed.";
    cout << "\n";
    cout << "List the name of book/s that you would like to borrow: ";
    cin >> order;
    cout << "\n";
    if (order == GW)
    {
      cout << "How many would you like to borrow?: ";
      cin >> n1;
      cout << "\n";
      GW = "Golden Wind";
      one = "true";
    }
    if (order == PB)
    {
      cout << "How many would you like to borrow?: ";
      cin >> n2;
      cout << "\n";
      PB = "Phantom Blood";
      two = "true";
    }
    if (order == SBR)
    {
      cout << "How many would you like to borrow?: ";
      cin >> n3;
      cout << "\n";
      SBR = "Steel Ball Run";
      three = "true";
    }
    else if (order == "0")
    {
      break;
    }
  }
}

int main()
{
	b1 = "GW";
	b2 = "PB";
	b3 = "SBR";
	cout << "+++++++++++++++++++++++++++++\n\n";

	cout << "Hello and Welcome to the library! There are 3 books available:\n\n";

	string books[3] = { "Golden Wind", "Phantom Blood", "Steel Ball Run" };
	cout << books[0] << " (GW) " << endl;
	cout << books[1] << " (PB) " << endl;
	cout << books[2] << " (SBR) " << endl;
	cout << "\n\n";

	cout << "+++++++++++++++++++++++++++++\n\n";
  
	cout << "Please fill up your library information.\n\n";

	cout << "Enter Student Name: ";
	getline(cin, name);

	cout << "Enter Student Number: ";
	getline(cin, number);

	cout << "Enter Year Level: ";
	getline(cin, year_level);

	cout << "Enter Course: ";
	getline(cin, course);
  
	cout << "Current date borrowed (mm/dd/yy): ";
	cin >> date;
	cout << "Enter due date (maximum 1 week only): ";
	cin >> date2;
	cout << "\n";

	cout << "Now proceed...\n\n";

    book();
  
	cout << "How many books borrowed: ";
	cin >> b;
	cout << "How many days borrowed: ";
	cin >> d;

	if (d <= 7)
	{
		cout << "Thank you for returning it on time!";
		cout << "\n\n";
	}
	else if (d > 7)
	{
		fn = (d - 7) * (b * 10);
	}

	cout << "total fine is: " << fn << endl;

	if (d > 7)
	{
		cout << "Sorry to inform you that you need to return this or you will be called by the librarian. 😠 ";
		cout << "\n\n";
	}

	if (d > 7)
	{
		cout << "Enter your payment here: ";
		cin >> pm;
		tc = pm - fn;

		cout << "total change is: " << tc << endl;
	}

	cout << "\n\n";
	cout << "===============================================================\n";
	cout << "=========================== RECEIPT ===========================\n";
	cout << "===============================================================\n";
	cout << "                     Welcome to Rob's Library!!!        \n";
	cout << "108 St. Joseph Ave. DLCH Barangka, Marikina City, Philippines     \n";
	cout << "                     Contact No: 09612758691                     \n";
	cout << "                            " << date << "                           \n";
	cout << "===============================================================\n";
	cout << "Student Name: " << name << endl;
	cout << "Student Number: " << number << endl;
	cout << "Year Level: " << year_level << endl;
	cout << "Course: " << course << endl;
	cout << "Date borrowed: " << date << endl;
	cout << "Due Date: " << date2 << endl;
	cout << "===============================================================\n";
	cout << " Book Dscpt                            Qty.              \n\n";
	if (one == "true") {
		cout << GW << "                   " << n1 << endl;
	}
	if (two == "true") {
		cout << PB << "                " << n2 << endl;
	}
	if (three == "true") {
		cout << SBR << "                     " << n3 << endl;
	}
	cout << "================================================================\n";
	cout << "Total number of books to be borrowed: " << b << endl;
	cout << "Payment: " << pm << endl;
	cout << "Change: " << tc << endl;
	cout << "Fine: " << fn << endl;
	cout << "\n";
	cout << "Thank you for using Rob's Library Systtem!!!\n";
	cout << "================================================================\n";

}