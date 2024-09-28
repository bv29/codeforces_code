#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){
    string s;
    getline(cin, s);
 for (auto i = s.rbegin(); i != s.rend(); ++i) {
    if(*i == '?'||*i==' '){
        continue;
    }
    if(*i=='a'||*i=='e'||*i=='i'||*i=='o'||*i=='u'||*i=='U'||*i=='O'||*i=='I'||*i=='E'||*i=='A'||*i=='Y'||*i=='y'){
        cout<<"YES";
        break;
    }
    else{
        cout<<"NO";
        break;
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
