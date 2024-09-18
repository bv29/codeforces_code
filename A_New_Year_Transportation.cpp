#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

void solve(){
   int n,t;
   cin>>n>>t;
   vector<int> val(n);
   for (int i = 0; i < n; i++)
   {
    cin>>val[i];

   }
    int pos=1;
   while(pos<t){
    // if(pos==0) break;
    pos+=val[pos-1];

   }

   if(pos==t){
    cout<<"YES";

   }
   else{
    cout<<"NO";
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