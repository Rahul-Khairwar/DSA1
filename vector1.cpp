// // Find all leaders in the array
// An element is a leader if it is greater than all elements to its right. The rightmost element is always a leader.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findLeaders(const vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    int maxRight = arr[n - 1];

    leaders.push_back(maxRight); // The last element is always a leader

    // Traverse from second last to the beginning
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }

    // Leaders are stored in reverse order, so reverse them
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leaders = findLeaders(arr);

    cout << "Leaders in the array are: ";
    for (int num : leaders) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
