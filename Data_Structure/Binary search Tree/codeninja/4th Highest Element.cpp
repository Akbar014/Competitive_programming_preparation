#include <iostream>
#include <queue>
#include <vector>
#include <climits>

int getFourthLargest(int arr[], int n)
{
    // Write your code here.
    if (n < 4) return INT_MIN;  // Not enough elements
    
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap; // Min-Heap

    for (int i = 0; i < n; i++) {
        minHeap.push(arr[i]);
        if (minHeap.size() > 4) {
            minHeap.pop(); // Remove smallest element
        }
    }

    return minHeap.top(); // 4th highest element
}