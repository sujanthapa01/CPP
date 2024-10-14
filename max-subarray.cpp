#include <iostream>
#include <vector>
#include <unordered_map> 
using namespace std;

pair<int, int> findSum(const vector<int>& nums, int target)
{
    unordered_map<int, int> numMap; // To store {value, index}
    
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        
        // Check if the complement is in the map
        if (numMap.find(complement) != numMap.end())
        {
            // Return indices of the complement and current number
            return {numMap[complement], i};
        }
        
        // Otherwise, add the current number to the map
        numMap[nums[i]] = i;
    }

    return {-1, -1}; // Return -1, -1 if no pair is found
}

int main()
{
    vector<int> nums = {3, 1, 2, 9};
    int target = 11;

    pair<int, int> res = findSum(nums, target);

    if (res.first != -1)
    {
        cout << "Pair found at indices: " << res.first << " and " << res.second << endl;
        cout << nums[res.first] << " + " << nums[res.second] << " = " << nums[res.first] + nums[res.second] << endl;
    }
    else
    {
        cout << "No matches found" << endl;
    }

    return 0;
}
