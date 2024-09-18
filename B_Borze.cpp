#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){
    //   . 0
    //   -. 1
    //   -- 2

    string s;
    cin>>s;
    string res;

for(int i=0;i<s.size();i++){
    if(s[i]=='.'){
       res.push_back('0');
    }
else if(s[i]=='-' && s[i+1]=='.'){
    res.push_back('1');
    i++;
}
else if(s[i]=='-' && s[i+1]=='-'){
     res.push_back('2');
      i++;
    
}
}

cout<<res<<nline;




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
