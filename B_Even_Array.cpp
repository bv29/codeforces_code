#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){
    int n;
    cin>>n;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
      if(x%2!=i%2){
        if(i%2==0){
           a++;
        }
        else{
        b++;
      }

      }
      
    }


    if(a!=b){
        
        cout<<"-1"<<nline;
        }
    else{
        cout<<a<<nline;
    }

    
   
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
