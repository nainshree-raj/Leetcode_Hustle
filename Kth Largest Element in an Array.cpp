QUESTION :
Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.
You must solve it in O(n) time complexity.
  
Example 1:
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
  
SOLUTION :
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++; 
        }    
        int ans=0;
        for(auto it=mp.rbegin();it!=mp.rend();it++)
        {
            k=k-(it->second);
            cout<<k<<endl;
            if(k<=0)
            {
                ans=it->first;
                break;
            }
        }
        return ans;
    }
};

//rbegin & rend = to iterate from end, we use this.
