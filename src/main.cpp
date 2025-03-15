#include <iostream>
#include <vector>

using namespace std;
vector<vector<char>> initGame(int width, int height);
void printGame(vector<vector<char>> g);
int runGame(vector<vector<char>> gameBoard);

int main() {
    vector<vector<char>> gameBoard;
    gameBoard = initGame(3, 3);
    runGame(gameBoard);
    return 0;
}

vector<vector<char>> initGame(int width, int height) {
    vector<vector<char>> game;
    for (int i = 0; i < width; i++) {
        vector<char> v;
        for (int j = 0; j < height; j++) {
            v.push_back(' ');
        }
        game.push_back(v);

    }
    return game;
}

void printGame(vector<vector<char>> g) {
    for (int i = 0; i < g.size(); i++) {
        for (int j = 0; j < g[i].size(); j++) {
            cout << g[i][j];
        }
        cout << endl;
    }
}

int runGame(vector<vector<char>> gameBoard) {
    cout << "Hello, World!" << endl <<
    "Welcome to a console based tic-tac-toe game!" << endl << 
    "You either enter some coordinates (x, y), or type 'q' to quit the game." << endl;
    
    string user1name;
    string user2name;
    cout << "Enter user 1 name: ";
    cin >> user1name;
    cout << endl << "Enter user 2 name: ";
    cin >> user2name;
    cout << endl;

    bool running = true;
    bool p1turn = true;

    while (running) {
        if (p1turn) {
            cout << "Player One ";
        } else {
            cout << "Player Two";
        }
        cout << "Please either quit the game 'q' or enter coordinates 'x, y'" << endl;
        string input;
        cin >> input;
        if (input[0] == 'q') {
            cout << "quits the game" << endl;
            running = false;
        }
        
        // if (!isalnum(input[0]) {
        //     cout << "please enter a coordinate location";
        //     continue;
        // }
    }
    return 0;
}
