#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

int main() {

  int num[10];

  //initialize elements of array
  for (int i = 0; i < 10; i++){
    num[i] = i + 100; //set ca;ue of each element
  }

  cout << "Element" << setw(13) << "Value" << endl;

  //output each array element's value
  for (int j = 0; j < 10; j++){
    cout << setw(7) << j << setw(13) << num[j] << endl;
  }


  return 0;
}