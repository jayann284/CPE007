#include <iostream>

using namespace std;

int main() {

  int num[5];

  //input elements of array
  cout << "Enter 5 numbers: " << endl;
  
  for (int i = 0; i < 5; i++){
    cin >> num[i];
  }

  cout << "The numbers are: " << endl;

  //output each array element's value
  for (int j = 0; j < 5; j++){
    cout << num[j] << " ";
  }

  return 0;
}