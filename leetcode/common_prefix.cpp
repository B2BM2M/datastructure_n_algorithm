#include <iostream>
#include <string>
#include <vector>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }
    string prefix = strs[0];
    cout << "prefix initial reading: " << prefix << endl;
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            cout << "strs [ " <<i <<" ] :" <<strs[i] << endl;
            prefix = prefix.substr(0, prefix.length() - 1);
            cout << " updated prefix :" << prefix << endl;
            if (prefix.empty()) {
                return "";
            }
        }
    }
    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string prefix = longestCommonPrefix(strs);
    cout << prefix << endl; // Output: "fl"
    return 0;
}


/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

*/