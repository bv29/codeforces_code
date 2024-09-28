#include <bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

void solve() {
    int n = 8; // Fixed since we know we are always taking 8 points
    vector<pair<int, int>> s(n);

    // Input the points
    for (int i = 0; i < n; i++) {
        cin >> s[i].first >> s[i].second;
    }

    int count = 0;

    // Check each point for neighbors
    for (int i = 0; i < n; i++) {
        int u = 0, l = 0, r = 0, d = 0; // Reset neighbor counts for each point
        int x = s[i].first;
        int y = s[i].second;

        // Check neighbors for the current point
        for (int j = 0; j < n; j++) {
            if (i == j) continue; // Skip the same point

            int x1 = s[j].first;
            int y1 = s[j].second;

            if (x1 > x && y1 == y) r++; // Right neighbor
            if (x1 < x && y1 == y) l++; // Left neighbor
            if (x1 == x && y1 < y) d++; // Down neighbor
            if (x1 == x && y1 > y) u++; // Up neighbor
        }

        // Check if all neighbor counts are greater than 0
        if (u > 0 && l > 0 && r > 0 && d > 0) {
            count++;
        }
    }

    cout << count << nline; // Output the count of valid points
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    while (T--) {
        solve();
    }
    return 0;
}