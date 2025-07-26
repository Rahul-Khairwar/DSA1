#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the arrays
    cout << "Enter the size of the arrays: ";
    cin >> n;

    int arr1[n], arr2[n], sum[n];

    // Input first array
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Input second array
    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Adding both arrays
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    // Output the sum array
    cout << "Sum of both arrays:\n";
    for (int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }

    return 0;
}
