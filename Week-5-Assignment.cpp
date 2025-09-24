#include <iostream>
#include <string>
using namespace std;

// List of Functions
void showMenu();
void viewSongs();
void playSong();
void exitProgram();

void showMenu() {
    cout << "Playlist 1:\n1. View Songs\n2. Play Song\n3. Exit\n";
    cout << "Choose an option (1-3):";
}

void viewSongs() {
    cout << "1. Yesterday\n2. Imagine\n3. Hey Jude\n";
    cout << "Press Enter to return to the menu...";
    cin.ignore();   // clears leftover input
    cin.get();      // waits for Enter
}

void playSong() {
    int choice2;
    cout << "Which song do you want to play (1-3)? ";
    cin >> choice2;

    switch(choice2) {
        case 1: cout << "Now playing: Yesterday\n"; break;
        case 2: cout << "Now playing: Imagine\n"; break;
        case 3: cout << "Now playing: Hey Jude\n"; break;
        default: cout << "Invalid song choice.\n";
    }
}

void exitProgram() {
    cout << "Exiting playlist... Done!\n";
}

int main() {
    int choice1;
    do {
        showMenu();
        cin >> choice1;

        switch(choice1) {
            case 1: viewSongs(); break;
            case 2: playSong(); break;
            case 3: exitProgram(); break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while(choice1 != 3);

    return 0;
}
