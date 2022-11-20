QUESTION :
Given an integer array nums, find the subarray which has the largest sum and return its sum.
  
Example 1:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
  
SOLUTION :
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            
            sum+=nums[i];
                maxi=max(sum,maxi);
            if(sum<0)
                sum=0;
        }
        return maxi;
    }
};
