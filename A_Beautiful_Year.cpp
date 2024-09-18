#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

bool isDistict(int year){
 int a,b,c,d;
   a = year%10;
   year/=10;
   b = year%10;
   year/=10;
   c = year%10;
   year/=10;
   d = year%10;
   year/=10;
//    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<nline;
   if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
    return true;
   }
   else{
    return false;
   }




}

void solve(){
    //   all digit - distinct , and larger than y;
    // 1000<=y<=9000

    int n; cin>>n;
for(int i = n+1;;i++){
    if(isDistict(i)){
        cout<<i<<nline;
        break;
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
