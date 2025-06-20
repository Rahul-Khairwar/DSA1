#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;  // Base case
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << number << " is " << factorial(number) << endl;

    return 0;
}
