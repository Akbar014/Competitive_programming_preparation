#include <iostream>
using namespace std;

// Function to calculate power without using built-in function
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

// Function to calculate the value of the equation
int calculateS(int X, int N) {
    int sum = 0;
    for (int i = 0; i <= N; i += 2) {
        if (i == 0) {
            sum += power(X, i) - 1; // (X^0 - 1)
        } else {
            sum += power(X, i); // (X^2), (X^4), ..., (X^N)
        }
    }
    return sum;
}

int main() {
    int X, N;
    cin >> X >> N;
    
    int result = calculateS(X, N);
    cout << result << endl;
    
    return 0;
}
