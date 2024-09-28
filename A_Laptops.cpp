#include <bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> laptops(n);
    for (int i = 0; i < n; ++i) {
        int price, quality;
        cin >> price >> quality;
        laptops[i] = {price, quality};
    }
    
    // Sort laptops by price
    sort(laptops.begin(), laptops.end());
    
    // Check if quality is not strictly increasing
    for (int i = 1; i < n; ++i) {
        if (laptops[i].second < laptops[i - 1].second) {
            cout << "Happy Alex";
            return;
        }
    }
    
    cout << "Poor Alex";
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