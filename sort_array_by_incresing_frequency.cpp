QUESTION: Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.
Return the sorted array.

Example 1:
Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

Example 2:
Input: nums = [2,3,1,3,2]
Output: [1,3,3,2,2]
Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.

Constraints:
1 <= nums.length <= 100
-100 <= nums[i] <= 100

  Answer: 
class Solution {
public:
     static bool cmp(pair<int,int>&a,pair<int,int>&b)
        {
          if(a.first==b.first)
          {
              return a.second>b.second;
          }
          return a.first < b.first;
        }
    vector<int> frequencySort(vector<int>& nums) {
       unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int n = nums.size();
        vector<pair<int,int>> pr;
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            pr.push_back({it->second,it->first});
        }
        sort(pr.begin(),pr.end(),cmp);
        
        vector<int>ans;
        for(auto j=0;j<pr.size();j++)
        {
            pair<int,int>p = pr[j];
            while(p.first>0)
            {
                ans.push_back(p.second);
                p.first--;
            }  
        }
        return ans;
    }
};
