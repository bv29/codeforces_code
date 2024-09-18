#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second


void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   bool isconditionmet = false;
   for (int i = 0; i < n-1; i++)
   {
    if(s[i]!=s[i+1]){
        cout<<"YES"<<" ";
        cout<<s[i]<<s[i+1]<<nline;
        isconditionmet = true;
        break;
    
    }

   }
       if(!isconditionmet){
        cout<<"NO"<<nline;
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
