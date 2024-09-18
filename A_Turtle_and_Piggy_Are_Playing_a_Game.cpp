#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long l, r;
        cin >> l >> r;
        
        // We choose the largest number x in the range [l, r]
        long long x = r;
        int score = 0;
        
        // We need to factorize x and count the number of divisions
       while(x>1){ for (long long p = 2;  p <= x; ++p) {
            while (x % p == 0) {
                x /= p;
                ++score;
            }
        }
        
        // If x is still greater than 1, then it is a prime number itself
        }
        
        cout << score << "\n";
    }
    
    return 0;
}
