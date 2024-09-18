
#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){
      int n;
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
        cin>>arr[i];

      }
      int sum  = 0 ;
      int odd = 0, even=0;

      for (int i = 0; i < n; i++)
      {
        sum+=arr[i];
        if(arr[i]%2) odd++;
        else even++;   
      }
      if((sum%2!=0)||(odd>=1&&even>=1))cout<<"YES"<<nline;
      else cout<<"NO"<<nline;
    
}

int32_t main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;

}
