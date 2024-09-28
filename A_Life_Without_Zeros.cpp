#include <bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

int removedZeros(int a)
{

    string finalstr = "";
    string s = to_string(a);
    for (auto i : s)
    {
        if (i != '0')
        {
            finalstr += i;
        }
    }

    return stoi(finalstr);
}

void solve()
{

    int x, y;
    cin >> x >> y;

    int c = x + y;

    int ux = removedZeros(x);

    int uy = removedZeros(y);
    int uc = removedZeros(c);
    // cout<<ux;

    if (ux + uy == uc)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
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
