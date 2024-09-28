#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){

   int n ; 
   cin>>n;
   set<int> s;
   int two = 2;

   while(two--){
    for(int i=0;i<4;i++){
        int x;cin>>x;
        s.insert(x);
    }
   }

    int count = 1;

   for(auto i : s){
    if( i != count){
        cout<<"Oh, my keyboard!";
            return;
    }
   }

   cout<<"I become the guy.";
    
    
      
}

int32_t main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    {
    }
    return 0;

}
