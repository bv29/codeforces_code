#include <bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[n];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<nline;    
    // cout << "\nMax Element = " << *max_element(arr, arr + n);
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
