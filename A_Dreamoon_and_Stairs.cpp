#include <bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second

void solve()
{
    int n, m;
    cin >> n >> m;
    int res = 0;
    if (m > n)
    {
        res = -1;
    }
    else
    {
        if (n % 2)
        {
            res = n / 2 + 1;
        }
        else
        {
            res = n / 2;
        }
        while (res % m > 0)
            {
                res++;
            }
        
    }
    cout << res;
}

int32_t main()
{
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
