// Music Playlist
// Create a class named Song containing the following private data members:
// • Song Name
// • Artist Name
// • Duration
// Create two Song objects. Write a friend function named compareSongs() that compares
// the duration of the two songs and displays which song is longer. If both songs have the
// same duration, display an appropriate message.
// Hint: The friend function should receive both Song objects as arguments.

#include <iostream>
using namespace std;

class Song {
private:
    string songName;
    string artistName;
    float duration;

public:
    Song(string name, string artist, float dur) {
        songName = name;
        artistName = artist;
        duration = dur;
    }

    friend void compareSongs(Song s1, Song s2);
};

void compareSongs(Song s1, Song s2) {
    cout << "Song 1: " << s1.songName << " by " << s1.artistName << endl;
    cout << "Duration: " << s1.duration << " minutes" << endl;

    cout << "Song 2: " << s2.songName << " by " << s2.artistName << endl;
    cout << "Duration: " << s2.duration << " minutes" << endl;

    if (s1.duration > s2.duration) {
        cout << "Song 1 is longer." << endl;
    } else if (s2.duration > s1.duration) {
        cout << "Song 2 is longer." << endl;
    } else {
        cout << "Both songs have the same duration." << endl;
    }
}

int main() {
    Song song1("Bohemians", "bohemia", 5.5);
    Song song2("lucky", "king", 8.0);

    compareSongs(song1, song2);

    return 0;
}