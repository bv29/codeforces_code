#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){

string s,t;
cin>>s>>t;
int pos = 0;
for(auto i : t){

    if(i==s[pos]){
        pos++;
    }
}
cout<<pos+1;
      
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
