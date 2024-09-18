#include <bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

void solve()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int cal = a + b + c + n;
    if (cal % 3 != 0||cal/3<a||cal/3<b||cal/3<c)
    {
        cout << "NO" << nline;
    }
    else
    {
        cout << "YES" << nline;
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
