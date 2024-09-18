#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        // To find x (cheaper in the first shop)
        long long x;
        if (a < c) {
            x = 1;
        } else {
            x = -1;
        }

        // To find y (cheaper in the second shop)
        long long y;
        if (b * a > c) {
            y = b;
        } else {
            y = -1;
        }

        cout << x << " " << y << endl;
    }

    return 0;
}
