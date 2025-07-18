//Program 4: Remove All Duplicates from String

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string s = "programming";
    unordered_set<char> seen;
    string result = "";

    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            result += c;
        }
    }

    cout << "String after removing duplicates: " << result << endl;
    return 0;
}
