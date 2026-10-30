#include <iostream>
using namespace std;

class Character {
public:
    virtual void attack() {
        cout << "Character attacks." << endl;
    }
    virtual ~Character() = default;
};

class Warrior : public Character {
private:
    int strength;
public:
    Warrior(int s) : strength(s) {}

    void attack() override {
        int damage = 20 + 2 * strength;
        cout << "Warrior damage: " << damage << endl;
    }
};

class Archer : public Character {
private:
    int agility;
public:
    Archer(int a) : agility(a) {}

    void attack() override {
        int damage = 15 + 3 * agility;
        cout << "Archer damage: " << damage << endl;
    }
};

int main() {
    int strength, agility;
    cout << "Enter warrior strength: ";
    cin >> strength;
    cout << "Enter archer agility: ";
    cin >> agility;

    Warrior warrior(strength);
    Archer archer(agility);

    Character* character = &warrior;
    character->attack();
    character = &archer;
    character->attack();

    return 0;
}
