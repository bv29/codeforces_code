#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

bool pointer(string &input){
    int tempptr = 0;
    // hello;
    string target = "hello";
    for( auto c:input){
        if(c == target[tempptr]){
            tempptr++;
        
        if (tempptr == target.size()) {
                return true;
            }
        }
    }
    return false;
}


void solve(){
    string s;
    cin>>s;
    if(pointer(s)){
        cout<<"YES"<<nline;
    }
    else{
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
