// Case 1: Using Two Pointers (Efficient O(n) In-Place)
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonZeroIndex = 0; // Index to place non-zero elements

    // Move non-zero elements to the front
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }

    // Fill the rest with zeroes
    while (nonZeroIndex < nums.size()) {
        nums[nonZeroIndex++] = 0;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZeroes(arr);

    cout << "After moving zeroes: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
