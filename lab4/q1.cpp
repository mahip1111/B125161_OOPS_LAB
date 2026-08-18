#include <iostream>
using namespace std;

class Diary {
private:
    string ownerName;
    string lastEntry;
    int numberOfEntries;

public:
    Diary(string name, int entries, string entry) {
        ownerName = name;
        numberOfEntries = entries;
        lastEntry = entry;
    }

    friend void displayDiary(Diary d){
    cout << "Owner Name: " << d.ownerName << endl;
    cout << "Number of Entries: " << d.numberOfEntries << endl;
    cout << "Last Entry: " << d.lastEntry << endl;
    };
};

int main() {
    Diary d("Manavendra", 10, "Study OOP");

    displayDiary(d);

    return 0;
}