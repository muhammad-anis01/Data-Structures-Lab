#include <iostream>
using namespace std;

//Task 3

int main() {
    int numPlayers;

    cout << "Enter the number of players in the tournament: ";
    cin >> numPlayers;

    int* scores = new int[numPlayers];

    cout << "\nEnter the scores for each player:\n";
    for (int i = 0; i < numPlayers; i++) {
        cout << "Player " << (i + 1) << " score: ";
        cin >> scores[i];
    }

    cout << "\n--- Tournament Scores ---\n";
    for (int i = 0; i < numPlayers; i++) {
        cout << "Player " << (i + 1) << ": " << scores[i] << endl;
    }

    delete[] scores;
    cout << "\nMemory released. Tracker closed successfully.\n";

    return 0;
}
