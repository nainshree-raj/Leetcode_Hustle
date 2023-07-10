QUESTION : Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Example 1:
Input: nums = [3,2,3]
Output: [3]

Example 2:
Input: nums = [1,2]
Output: [1,2]

SOLUTION : class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>mp;
        int n=nums.size();
        int min=(n/3)+1;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]==min)
            {
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
