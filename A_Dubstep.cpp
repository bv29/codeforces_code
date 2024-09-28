#include<bits/stdc++.h>

using namespace std;

#define nline "\n"
typedef long long ll;


void solve(){
    string s;
    cin >> s; // Reading the input string
    
    string result = "";
    bool firstWord = true;

    // Split the string by "WUB"
    for (size_t i = 0; i < s.length(); ) {
        // If "WUB" is found, skip it
        if (s.substr(i, 3) == "WUB") {
            i += 3;
        } else {
            // Extract the next word and append it to the result
            if (!firstWord) {
                result += " ";
            }
            while (i < s.length() && s.substr(i, 3) != "WUB") {
                result += s[i];
                i++;
            }
            firstWord = false;
        }
    }
    
    // Output the final result
    cout << result << endl;


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
