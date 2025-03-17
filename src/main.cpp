#include <iostream>
#include <vector>

using namespace std;

int changeGameGrid(vector<int> v2, bool isPlayerOne);
vector<int> convertToVector(string input);
string input(string msg);
void printGameGrid();
void makeGameGrid();
int runGame();


vector<vector<char>> game;

int main() {
    makeGameGrid();
    int err = runGame();
    if (err != 0) {
        cerr << "There Has Been A Fatal Error!" << endl;
    }
    return err;
}

int runGame() {
    // begining msg
    cout << "Hello! Welcome to my TickTackToe game!" << endl << 
    "To play the game, each player just has to enter a coordinate location" << endl <<
    "For example, (1,1) would be the top left corner, and (3, 3) would be the bottom right corner." << endl <<
    "If you want to quit the game, just type 'q'" << endl;

    // gets player's name
    string playerOneName;
    string playerTwoName;

    playerOneName = input("What is your name Player One? ");
    playerTwoName = input("What is your name Player Two? ");

    cout << "Hello, " << playerOneName << " & " << playerTwoName << endl <<
    "Starting the game!" << endl;

    bool running;
    running = true;
    bool playerOneTurn;
    playerOneTurn = true;
    while (running) {
        printGameGrid();
        string currentPlayerName;
        char ch;
        if (playerOneTurn) {
            currentPlayerName = playerOneName;
            ch = 'X';
        } else {
            currentPlayerName = playerTwoName;
            ch = 'O';
        }

        string coords = input(currentPlayerName + " input coords: ");
        vector<int> v = convertToVector(coords);
        if (v == vector<int> {-1, -1}) {}
    }

    return 0;
}

void makeGameGrid() {
    vector<vector<char>> grid;
    for (int i = 0; i < 3; i++) {
        vector<char> v;
        for (int j = 0; j < 3; j++) {
            v.push_back(' ');
        }
        grid.push_back(v);
    }
    game = grid;
}

int changeGameGrid(vector<int> v2, bool isPlayerOne) {
    if (v2.size() != 2) {
        return 1; // exit code 1 means invalid vector length
    }
    if (v2[0] > 2 || v2[1] > 2 || v2[0] < 0 || v2[1] < 0) { 
        return 2; // exit code 2 means value/s are larger than the game board
    }
    if (game[v2[0]][v2[1]] != ' ') {
        return 3; // already taken
    }

    char ch;
    if (isPlayerOne) {
        ch = 'X';
    } else {
        ch = 'Y';
    }
    game[v2[0]][v2[1]] = ch;
    return 0;
}

void printGameGrid() {
    for (int i = 0; i < 3; i++) {
        cout << " -  -  - " << endl;
        for (int j = 0; j < 3; j++) {
            cout << "|" << game[i][j] << "|";
        }
        cout << endl;
    }
    cout << " -  -  - ";
}

string input(string msg) {
    cout << msg;
    string out;
    cin >> out;
    return out;
}

vector<int> convertToVector(string input) {
    if (!input[0] == '(' || input[input.length()-1] == ')') {
        return vector<int> {-1, -1};
    }
    return vector<int> {0, 0};
}