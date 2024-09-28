#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){

   int n;cin>>n;

    vector<vector<char>> arr(n, vector<char>(n));
    for (char i = 0; i < n; i++) {
        for (char j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    char firstChar = arr[0][0];
    for( auto i : arr){
        for(auto j : arr){
            
        }
    }



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
