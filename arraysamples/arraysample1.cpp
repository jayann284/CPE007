#include <iostream>
#include <string>

using namespace std;

int main() {

  int num[10];
  
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  
  for (int i = 0; i < 4; i++){
    cout << cars[i] << endl;
  }

  int numbers[5] = {8, 11, 5, 6, 9};

  cout << "\nThe numbers are: ";

  for (int i = 0; i < 5; i++){
    cout << numbers[i] << " ";
  }
  
  return 0;
}