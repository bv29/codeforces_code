#include <iostream>
#include <vector>

using namespace std;

// Function to count adjacent 'o' cells
int countAdjacentOs(const vector<string>& board, int row, int col, int n) {
    int count = 0;
    // Directions for adjacent cells: up, down, left, right
    int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    for (int i = 0; i < 4; ++i) {
        int newRow = row + directions[i][0];
        int newCol = col + directions[i][1];
        // Check if the new position is within the bounds of the board
        if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n) {
            if (board[newRow][newCol] == 'o') {
                count++;
            }
        }
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    
    vector<string> board(n);
    
    // Read the board configuration
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }

    // Check each cell in the board
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Count adjacent 'o' cells
            int adjacentOs = countAdjacentOs(board, i, j, n);
            // Check if the count is odd
            if (adjacentOs % 2 != 0) {
                cout << "NO" << endl; // Found an odd count
                return;
            }
        }
    }
    
    cout << "YES" << endl; // All counts are even
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve(); // Call the function to solve the problem
    return 0;
}