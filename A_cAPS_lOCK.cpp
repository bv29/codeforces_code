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
   string s;
   cin>>s;
bool allUpper = true;
   for (int i = 1; i < size(s); i++) allUpper = allUpper&&isupper(s[i]);
    if(allUpper||size(s)==1){
        for (int i = 1; i < size(s); i++)   s[i]=tolower(s[i]);
    if(isupper(s[0])) s[0]=tolower(s[0]);
    else s[0]=toupper(s[0]);
        
        
    }

    cout<<s;

   

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
