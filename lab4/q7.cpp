// Game Player Status
// Create a class named Player containing the following private data members:
// • Player Name
// • Health
// • Score
// • Level
// Create a class named GameManager and declare it as a friend class of Player.
// The GameManager class should contain member functions to:
// 1. Display player details.
// 2. Check whether the player is alive.
// 3. Display the player’s current level and score.
// Hint: A player is considered alive if the health value is greater than 0.

#include <iostream>
using namespace std;

class Player {
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    Player(string name, int h, int s, int l) {
        playerName = name;
        health = h;
        score = s;
        level = l;
    }

    friend class GameManager;
};

class GameManager {
public:
    void displayPlayerDetails(Player p) {
        cout << "Player Name: " << p.playerName << endl;
        cout << "Health: " << p.health << endl;
    }

    void checkIfAlive(Player p) {
        if (p.health > 0)
            cout << "Player is Alive" << endl;
        else
            cout << "Player is Dead" << endl;
    }

    void displayLevelAndScore(Player p) {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main() {
    Player p("Alice", 100, 500, 5);
    GameManager gm;

    gm.displayPlayerDetails(p);
    gm.checkIfAlive(p);
    gm.displayLevelAndScore(p);

    return 0;
}