#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){

    int x;cin>>x;
    while(x--){
    int n = 3;
    
    vector<int> v(n);  // Declare vector of size n

    // Input values into the vector
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
      int sum = std::accumulate(v.begin(), v.end(), 0); 
      cout<<sum<<nline;
    //   if(sum == 0){
    //     cout<<"YES";
    //         break;
    //   }
    //   else{
    //     cout<<"NO";
    //   }
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
