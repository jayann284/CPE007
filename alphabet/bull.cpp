#include <iostream>

using namespace std;

int main()
{
    char letter;
    char lowerConsonant, upperConsonant, vowel;

    cout << "Enter a character: ";
    cin >> letter;

    lowerConsonant = (letter == 'q' || letter == 'w' || letter == 'r' || letter == 't' || letter == 'y' || letter == 'p' || letter == 's' || letter == 'd' || letter == 'f' || letter == 'g' || letter == 'h' || letter == 'j' || letter == 'k' || letter == 'l' || letter == 'z' || letter == 'x' || letter == 'c' || letter == 'v' || letter == 'b' || letter == 'n' || letter == 'm');
    upperConsonant = (letter == 'Q' || letter == 'W' || letter == 'R' || letter == 'T' || letter == 'Y' || letter == 'P' || letter == 'S' || letter == 'D' || letter == 'F' || letter == 'G' || letter == 'H' || letter == 'J' || letter == 'K' || letter == 'L' || letter == 'Z' || letter == 'X' || letter == 'C' || letter == 'V' || letter == 'B' || letter == 'N' || letter == 'M');
    vowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
    //lowerConstant = (letter >= 97 && letter <=122)
    //upperConstant = (letter >= 65 && letter <= 90)
    //vowel = (letter >= && letter <=)

    
    if ((letter == lowerConsonant) || (letter == upperConsonant) || (letter == vowel))
    {
        if (letter == vowel)
        {
            cout << "Vowel";
        }
        else if (letter == lowerConsonant)
        {
            cout << "Lowercase";
        }
        else if (letter == upperConsonant)
        {
            cout << "Uppercase";
        }
    }
    else if (letter >= 49 && letter <= 52)
    {
        cout << "First-half";
    }
    else if (letter >= 53 && letter <= 57)
    {
        cout << "Second-half";
    }
    
    return 0;
}