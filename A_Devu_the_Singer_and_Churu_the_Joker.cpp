#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){

   int n,d;
   cin>>n>>d;
//    int arr[n];
int sum=0;
   for(int i=0;i<n;i++){
     int x;
     cin>>x;
     sum+=x;
   }   

    int total = sum+(n-1)*10;
    if(total>d){
       cout<<((n-1)*2+1);
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
