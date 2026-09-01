// Message Inspector Amessaging application stores a sentence in a character array. Using a character pointer, count: • Numberofuppercase letters. • Numberoflowercase letters. • Numberofspaces. Traverse the sentence until the null character ’\0’.

#include <iostream>
using namespace std;

int main() {
    char message[200];

    cout << "Enter a sentence: ";
    cin.getline(message, 200);

    char *ptr = message;  // here ptr points to the first index of the array

    // creating the varibales for the uppaer case and the lower case and also the spaces
    int uppercase = 0;
    int lowercase = 0;
    int spaces = 0;

    while (*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            uppercase++;
        }
        else if (*ptr >= 'a' && *ptr <= 'z') {
            lowercase++;
        }
        else if (*ptr == ' ') {
            spaces++;
        }

        ptr++;
    }

    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Spaces: " << spaces << endl;

    return 0;
}
