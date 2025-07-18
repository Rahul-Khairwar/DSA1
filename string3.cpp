//Program 3: Count Frequency of Characters

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s = "apple";
    unordered_map<char, int> freq;
    
    for (char c : s) {
        freq[c]++;
    }

    cout << "Character frequencies:\n";
    for (auto p : freq) {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}
