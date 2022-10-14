QUESTION :
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
  
SOLUTION :
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //two pointers approach
         vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
         int n=nums.size();
        for(int i=0;i<nums.size();i++)
        { 
            int a=nums[i];
            int t=(-a);
            int s=i+1;
            int e=n-1;
            while(s<e)
            {
                if(nums[s]+nums[e]==t)
                {
                    ans.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1])s++;
                    while(s<e && nums[e]==nums[e-1])e--;
                    s++;
                    e--;
                }
                else if(nums[s]+nums[e]>t)
                {
                    e--;
                }
                else
                {
                    s++;
                }
            }
            while(i+1<n && nums[i]==nums[i+1])i++;
        }
        return ans;
    }
};
