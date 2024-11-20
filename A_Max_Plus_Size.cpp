#include<bits/stdc++.h>
using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    while(testcase > 0) {
        int size;
        cin >> size;

        int ar[size];
        for (int i = 0; i < size; i++) {
            cin >> ar[i];
        }

        int max_val_even = 0, count_even = 0;
        int max_val_odd = 0, count_odd = 0;


        for (int i = 0; i < size; i += 2) {
            max_val_even = max(max_val_even, ar[i]);
            count_even++;
        }

       
        for (int i = 1; i < size; i += 2) {
            max_val_odd = max(max_val_odd, ar[i]);
            count_odd++;
        }

        int result_even = max_val_even + count_even;
        int result_odd = max_val_odd + count_odd;

        cout << max(result_even, result_odd) << endl;
        cout << result_even << result_odd << endl;

        testcase--;
    }
}
