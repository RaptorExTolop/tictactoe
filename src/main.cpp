#include <iostream>
#include <vector>

using namespace std;
void makeGameGrid();
int changeGameGrid(vector<int> v2);

vector<vector<char>> game;

int main() {
    makeGameGrid();
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
        ch = 'Y'
    }
}