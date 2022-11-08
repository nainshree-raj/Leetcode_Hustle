QUESTION : Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.
A subarray is a contiguous part of an array.
  
EXAMPLE : Input: nums = [4,5,0,-2,-3,1], k = 5
Output: 7
Explanation: There are 7 subarrays with a sum divisible by k = 5:
[4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]

SOLUTION : 
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
        int ans=0;
        int n=nums.size();
   /*   int prefix[n+1];
        prefix[0]=0;
        for(int i=1;i<n+1;i++)
        {
            prefix[i] = prefix[i-1] + nums[i-1];
        }*/
        unordered_map<int,int>mp;
        mp[0]++;
        int sum=0,rem=0;
        for(int i = 0 ; i<n ; i++)
        {
            sum+=nums[i];
            rem = sum%k;
            if(rem<0)
            {
                rem+=k;
            }
            if(mp.find(rem)!=mp.end())
            {
                ans+=mp[rem];
                mp[rem]++;
            }
            else
            {
                mp[rem]++;
            } 
        }
        return ans;
    }
};
