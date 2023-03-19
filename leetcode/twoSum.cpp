#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Solution:
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (hash.count(complement)) {
            return { hash[complement], i };
        }
        hash[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 14;
    vector<int> result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}

/*
Problem:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

*/
