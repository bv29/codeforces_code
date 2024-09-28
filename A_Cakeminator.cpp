#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<string> cake(r);  // To store the grid of the cake
    for (int i = 0; i < r; i++) {
        cin >> cake[i];
    }

    vector<bool> rowHasStrawberry(r, false);  // Tracks rows with strawberries
    vector<bool> colHasStrawberry(c, false);  // Tracks columns with strawberries

    // Find which rows and columns contain strawberries
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (cake[i][j] == 'S') {
                rowHasStrawberry[i] = true;
                colHasStrawberry[j] = true;
            }
        }
    }

    // Count rows that cannot be eaten (those with strawberries)
    int nonEatableRows = 0;
    for (int i = 0; i < r; i++) {
        if (rowHasStrawberry[i]) {
            nonEatableRows++;
        }
    }

    // Count columns that cannot be eaten (those with strawberries)
    int nonEatableCols = 0;
    for (int j = 0; j < c; j++) {
        if (colHasStrawberry[j]) {
            nonEatableCols++;
        }
    }

    // Total cells that cannot be eaten
    int nonEatableCells = nonEatableRows * nonEatableCols;

    // Total cells that can be eaten
    int eatableCells = (r * c) - nonEatableCells;

    cout << eatableCells << endl;

    return 0;
}