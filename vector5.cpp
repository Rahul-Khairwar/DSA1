//  Combined Program: Move Zeroes (Two Methods in One)

#include <iostream>
#include <vector>
using namespace std;

// --------- Case 1: In-Place using Two Pointers ---------
void moveZeroesInPlace(vector<int>& nums) {
    int nonZeroIndex = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[nonZeroIndex++] = nums[i];
        }
    }
    while (nonZeroIndex < nums.size()) {
        nums[nonZeroIndex++] = 0;
    }
}

// --------- Case 2: Using Extra Vector ---------
vector<int> moveZeroesWithExtraSpace(const vector<int>& nums) {
    vector<int> result;
    for (int num : nums) {
        if (num != 0)
            result.push_back(num);
    }
    while (result.size() < nums.size()) {
        result.push_back(0);
    }
    return result;
}

// --------- Utility to Print Vector ---------
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

// --------- Main Function ---------
int main() {
    int n, choice;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "\nChoose Method to Move Zeroes:\n";
    cout << "1. In-Place (Two Pointers)\n";
    cout << "2. Extra Space (New Vector)\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        moveZeroesInPlace(arr);
        cout << "After moving zeroes (In-Place): ";
        printVector(arr);
    } else if (choice == 2) {
        vector<int> result = moveZeroesWithExtraSpace(arr);
        cout << "After moving zeroes (Extra Space): ";
        printVector(result);
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
// Sample Run:
// mathematica
// Copy
// Edit
// Enter size of array: 6
// Enter 6 elements:
// 0 1 0 3 0 5

// Choose Method to Move Zeroes:
// 1. In-Place (Two Pointers)
// 2. Extra Space (New Vector)
// Enter choice (1 or 2): 1

// After moving zeroes (In-Place): 1 3 5 0 0 0