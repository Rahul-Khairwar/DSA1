// Case 2: Using Extra Vector (Not In-Place, uses extra space)

#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeroesUsingExtraSpace(const vector<int>& nums) {
    vector<int> result;

    // First add all non-zero elements
    for (int num : nums) {
        if (num != 0)
            result.push_back(num);
    }

    // Add required number of zeroes at end
    while (result.size() < nums.size()) {
        result.push_back(0);
    }

    return result;
}

int main() {
    vector<int> arr = {0, 0, 1, 0, 2, 3};
    vector<int> result = moveZeroesUsingExtraSpace(arr);

    cout << "After moving zeroes (extra space): ";
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}

