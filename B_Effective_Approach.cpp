#include<bits/stdc++.h>
using namespace std;

#define nline "\n"
typedef long long ll;

void solve() {
    int n;
    cin >> n;

    int number[n];
    unordered_map<int, int> vasyaPos;  // Stores 1-based position from left to right
    unordered_map<int, int> patyaPos;  // Stores 1-based position from right to left

    // Read the array
    for (int i = 0; i < n; i++) {
        cin >> number[i];
        // If this is the first occurrence, store the position for Vasya
        if (vasyaPos.find(number[i]) == vasyaPos.end()) {
            vasyaPos[number[i]] = i + 1;  // Store 1-based index for Vasya
        }
    }

    // Traverse from right to left for Patya
    for (int i = n - 1; i >= 0; i--) {
        // If this is the first occurrence, store the position for Patya
        if (patyaPos.find(number[i]) == patyaPos.end()) {
            patyaPos[number[i]] = n - i;  // Store 1-based index for Patya
        }
    }

    int queries;
    cin >> queries;
    long long count_1 = 0;
    long long count_2 = 0;

    // For each query, directly fetch precomputed positions
    while (queries--) {
        int queryNumber;
        cin >> queryNumber;
         count_1+=vasyaPos[queryNumber];
         count_2+=patyaPos[queryNumber];
        // Output the precomputed positions for Vasya and Patya
        
    }
    cout<<count_1<<" "<<count_2;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}