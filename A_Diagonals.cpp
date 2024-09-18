#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){
   int n,k;
   cin>>n>>k;
    if(k<=n){
    cout<<(k>0)<<nline;

 }

if(k>n){
    k-=n;
    int ans =1, cur = n-1;
    while(k>0){
        k-=cur;
        ans++;
        if(k<=0)break;
        k-=cur;
        ans++;
        cur--;

    }
    cout<<ans<<nline;


    }}

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
