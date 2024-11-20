#include <iostream>
#include <unordered_set>
using namespace std;

void solve() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Input array elements
        }

        long long prefix_sum = 0;
        unordered_set<long long> seen_prefix_sums;
        seen_prefix_sums.insert(0); // Insert 0 to handle the case where prefix_sum is 0
        int beautiful_segments = 0;

        for (int i = 0; i < n; i++) {
            prefix_sum += a[i];

            // If the current prefix_sum has been seen before, we found a beautiful segment
            if (seen_prefix_sums.count(prefix_sum)) {
                beautiful_segments++;  // Increment count of beautiful segments
                seen_prefix_sums.clear(); // Reset the set for new segment
                seen_prefix_sums.insert(0); // Re-insert 0 to handle the case where next prefix_sum is 0
                prefix_sum = 0; // Reset prefix_sum for the new segment
            }

            // Insert the current prefix_sum to the set
            seen_prefix_sums.insert(prefix_sum);
        }

        // Output the result for this test case
        cout << beautiful_segments << endl;
    }
}

int main() {
    solve();
    return 0;
}
