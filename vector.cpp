#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate a vector to the right by k steps
void rotateRight(vector<int>& v, int k) {
    int n = v.size();
    k = k % n;  // handle k > n

    // Reverse the entire vector
    reverse(v.begin(), v.end());

    // Reverse first k elements
    reverse(v.begin(), v.begin() + k);

    // Reverse the remaining elements
    reverse(v.begin() + k, v.end());
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;

    rotateRight(v, k);

    cout << "Rotated Vector: ";
    for (int num : v) {
        cout << num << " ";
    }

    return 0;
}
