#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        if (m == 0) {
            cout << n << endl;
        } else {
            // Calculate the highest power of 2 less than or equal to n
            long long highestPowerOf2 = 1;
            while (highestPowerOf2 <= n) {
                highestPowerOf2 <<= 1;
            }
            highestPowerOf2 >>= 1;

            // If m is large enough, then a[n] will stabilize to all bits set to 1 up to the highest power of 2 of n
            long long result = (highestPowerOf2 << 1) - 1;
            cout << result << endl;
        }
    }
    return 0;
}
