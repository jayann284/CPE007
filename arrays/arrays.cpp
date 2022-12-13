#include <iostream>

using namespace std;

int main(void) {
    int boogey, row, column, elements[row][column];

    cout << "Enter # of rows: ";
    cin >> row;
    cout << "Enter # of columns: ";
    cin >> column;   
    
    cout << "Elements: " << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            cin >> elements[row][column];
        }
    }
    
    for (int k = 0; k < row; k++){
        for (int l = 0; l < column; l++){
            cout << "ar[" << k << "][" << l << "]: ";
            cout << elements[k][l];
        }
    }
    

    return 0;
}