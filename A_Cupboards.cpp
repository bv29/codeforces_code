#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int leftOpen = 0, leftClosed = 0;
    int rightOpen = 0, rightClosed = 0;

    // Reading the cupboards' states
    for (int i = 0; i < n; i++) {
        int left, right;
        cin >> left >> right;
        
        if (left == 1) leftOpen++;
        else leftClosed++;
        
        if (right == 1) rightOpen++;
        else rightClosed++;
    }
    
    // Calculating the minimum changes required
    int leftChanges = min(leftOpen, leftClosed);
    int rightChanges = min(rightOpen, rightClosed);

    // Total minimum changes
    int result = leftChanges + rightChanges;
    cout << result << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}