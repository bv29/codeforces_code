#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){
  vector<int> arr;
  for (int i = 0; i < 3; i++)       
  { int x;
     cin>>x;
     arr.push_back(x);

  }
  sort(begin(arr), end(arr));
  if (arr[1] != arr[2]) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl << arr[0] << " " << arr[0] << " " << arr[2] << endl;
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
