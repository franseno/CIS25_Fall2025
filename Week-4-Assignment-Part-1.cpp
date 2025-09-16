#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    string newSong;

    // Songs in Playlist
    string song1 = "ShapeOfYou", song2 = "SaveYourTears", song3 = "CallMeMaybe";
    

    // Menu
    cout << "Playlist 1:\n1. View Songs\n2. Add Song\n3. Download Songs\n4. Exit\n";
    cout << "Choose an option (1-4):";
    cin >> choice;

    // Menu actions 
    if (choice == 1) {
        cout << "Songs in playlist:\n";
        cout << song1 << "\n" << song2 << "\n" << song3 << "\n";
    } 
    else if (choice == 2) {
        cout << "Enter song name to add (no spaces):";
        cin >> newSong;
        cout << newSong << " was added to playlist.\n";
    } 
    else if (choice == 3) {
        cout << "Downloading all songs...\nDownload completed.\n";
    } 
    else if (choice == 4) {
        cout << "Exiting Playlist 1...\n";
    } 
    else {
        cout << "Invalid option.\n";
    }
    return 0;
}