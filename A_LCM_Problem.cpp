#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

void solve(){

    int l, r;
    cin>>l>>r;
    int x = l;
    int y = 2*x;
    if(y<=r) cout<<x<<" "<<y<<nline;
    else cout<<"-1"<<" "<<"-1"<<nline;
}

int32_t main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;

}
