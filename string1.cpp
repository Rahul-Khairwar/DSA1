//Program 1: Reverse a String Without Using reverse()

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello";
    int n = s.length();
    
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }

    cout << "Reversed String: " << s << endl;
    return 0;
}
