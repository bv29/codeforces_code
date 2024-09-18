#include <bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

void solve()
{
  int n;
  cin >> n;
  vector<int> val;
  vector<int> res;

  for (int i = 1; i <= n; i++)
  {
    val.push_back(i);
  }

  while (size(val) > 1)
  {
    int s = size(val);
    int sum = val[s - 1] + val[s - 2];
    res.push_back(val[s-1]);
        res.push_back(val[s-2]);

        val.pop_back();
        val.pop_back();

        if(sum%2==1){
            val.push_back(sum/2+1);
        }
        else{
          val.push_back(sum/2);
        }
  }
  cout<<val.back()<<nline;
        for (int i = 0; i < size(res); i+=2)
        {
          // cout<<i<<" ";
          cout<<res[i]<<" "<<res[i+1]<<nline;
        }
}

  int32_t main()
  {
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