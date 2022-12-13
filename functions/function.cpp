#include <iostream>
using namespace std;

int compare(char a, char b);

int main(void) {
    char a,b;
    
    cout << "Enter first character: ";
    cin >> a;
    
    cout << "Enter second character: ";
    cin >> b;
    
    int result = compare(a,b);
    
    cout << result;
    
    return 0;
}

int compare(char a, char b){
    int a_num = int(a);
    int b_num = int(b);

    if (a_num > b_num){
        cout << "Result value = " << a_num;
    }
    if (b_num > a_num){
        cout << "Result value = " << b_num;
    }

    return 0;
}