#include <iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    // Total number of odd numbers
    long long total_odds = (n + 1) / 2;

    if (k <= total_odds) {
        // If k is within the range of odd numbers
        cout << 1 + 2 * (k - 1) << endl;
    } else {
        // If k is within the range of even numbers
        k -= total_odds; // Adjust k to be relative to the even numbers
        cout << 2 * k << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}