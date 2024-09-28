#include<bits/stdc++.h>
using namespace std;

#define nline "\n"
typedef long long ll;

int findMaxOccurrenceCount(const vector<vector<int>>& arr) {
    unordered_map<int, int> freqMap;  // To store the frequency of each element
    int maxOccurrence = 0;

    // Traverse the 2D array and count the occurrences
    for (const auto& row : arr) {
        for (const auto& element : row) {
            freqMap[element]++;  // Increment the count of the current element

            // Keep track of the maximum occurrence count
            if (freqMap[element] > maxOccurrence) {
                maxOccurrence = freqMap[element];
            }
        }
    }

    // Return the maximum occurrence count
    return maxOccurrence;
}

void solve() {
    int k;
    cin >> k;

    // Read a 4x4 grid of integers
    vector<vector<int>> arr(4, vector<int>(4));
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    int totalTiming = 2 * k;
    
    // Find the maximum occurrence count
    int maxOccurrence = findMaxOccurrenceCount(arr);

    // Check if it's possible to press all panels within the timing constraint
    if (maxOccurrence <= totalTiming) {
        cout << "YES" << nline;
    } else {
        cout << "NO" << nline;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
} 