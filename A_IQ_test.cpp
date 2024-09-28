#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){

   int n;cin>>n;
   int arr[n];

   for(int i=0;i<n;i++){
    cin>>arr[i];


   }   
 int odd = 0, even=0;
   for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        even++;
    }else
    odd++;

   }   

    if(even>odd){
      for(int i=0;i<n;i++){
         if(arr[i]%2==1){
            cout<<(i+1);
         }
      }
    }
    else{
         for(int i=0;i<n;i++){
         if(arr[i]%2==0){
            cout<<(i+1);
         }
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
