#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){
   int n,t;
   cin>>n>>t;
   char arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];

   }
  while(t--){
    for(int i=0;i<n-1;i++){
        if(arr[i]=='B'&&arr[i+1]=='G'){
                swap(arr[i],arr[i+1]);
                i++;

        }
    }
  }
 
    cout<<arr<<nline;
 


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
