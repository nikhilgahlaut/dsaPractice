#include <iostream>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;

    // Count the frequency of each character
    for (int i =0 ; i<s.length(); i++) 
    {
        char c = s[i];
        charCount[c]++;
    }

    // Find the first non-repeating character and return its index
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) 
        {
            return i;
        }
    }

    // No non-repeating character found
    return -1;
}

int main() {
    string input = "leetcode";
    int index = firstUniqChar(input);
    cout << index << endl;
    return 0;
}
