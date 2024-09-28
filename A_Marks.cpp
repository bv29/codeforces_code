#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grades(n);
    for (int i = 0; i < n; ++i) {
        cin >> grades[i];
    }

    // Step 2: Find the highest marks for each subject
    vector<int> highest(m, 0);
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            highest[j] = max(highest[j], grades[i][j] - '0'); // convert char to int
        }
    }

    // Step 3: Identify successful students
    set<int> successfulStudents; // to store the indices of successful students
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grades[i][j] - '0' == highest[j]) {
                successfulStudents.insert(i); // mark student i as successful
                break; // no need to check other subjects for this student
            }
        }
    }

    // Output the number of successful students
    cout << successfulStudents.size() << endl;

    return 0;
}q