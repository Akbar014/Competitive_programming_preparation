#include <iostream>
#include <unordered_set>
using namespace std;


int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        long long prefix_sum = 0;
        unordered_set<long long> seen_prefix_sums;
        seen_prefix_sums.insert(0); 
        int beautiful_segments = 0;

        for (int i = 0; i < n; i++) {
            prefix_sum += a[i];

            
            if (seen_prefix_sums.count(prefix_sum)) {
                beautiful_segments++;  
                seen_prefix_sums.clear(); 
                seen_prefix_sums.insert(0); 
                prefix_sum = 0; 
            }

            
            seen_prefix_sums.insert(prefix_sum);
        }

        
        cout << beautiful_segments << endl;
    }
    return 0;
}
