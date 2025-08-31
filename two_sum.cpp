#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
   Function: twoSum
   ----------------
   Given a vector of integers and a target value,
   this function returns the indices of the two numbers
   that add up to the target.

   Approach:
   - I used an unordered_map (hash table) to store numbers
     and their corresponding indices.
   - For each number, calculate the "complement" needed
     to reach the target.
   - If the complement is already in the map, we can find the pair.
   - Otherwise, we store the current number in the map.
*/

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];


        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }


        seen[nums[i]] = i;
    }

    return {};
}

int main() {
    
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;

    vector<int> result1 = twoSum(nums1, target1);
    cout << "Output: [" << result1[0] << "," << result1[1] << "]" << endl;

    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;

    vector<int> result2 = twoSum(nums2, target2);
    cout << "Output: [" << result2[0] << "," << result2[1] << "]" << endl;

    vector<int> nums3 = {3, 3};
    int target3 = 6;

    vector<int> result3 = twoSum(nums3, target3);
    cout << "Output: [" << result3[0] << "," << result3[1] << "]" << endl;

    return 0;
}
