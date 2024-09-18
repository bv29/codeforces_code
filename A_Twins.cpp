#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){

 int n;
    cin >> n;
    vector<int> coins(n);
    int total_sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        total_sum += coins[i];
    }

    // Sort coins in descending order
    sort(coins.rbegin(), coins.rend());

    int picked_sum = 0;
    int count = 0;

    // Pick coins until picked_sum is more than half of total_sum
    for (int coin : coins) {
        picked_sum += coin;
        count++;
        if (picked_sum > total_sum - picked_sum) {
            break;
        }
    }

    cout << count << endl;




}

int32_t main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;

}
