#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){
  
    int n, m, a, b;
    
    cin >> n >> m >> a >> b;
    if (m * a <= b)
        cout << n * a << "\n";
    else 
        cout << (n/m) * b + min((n%m) * a, b) << "\n";
 

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
