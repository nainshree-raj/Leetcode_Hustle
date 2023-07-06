QUESTION : You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element, which appears exactly once.

Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.

  Example 1:
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
  
Example 2:
Input: nums = [3,3,7,7,10,11,11]
Output: 10

SOLUTION : class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int n=nums.size();
    int start=0,end=n-1;
    int mid=0;
    if(n==1)
    {
        return nums[0];
    }
    while(start<=end)
    {
        mid=start+((end-start)/2);
        if(mid==0 || mid==(n-1))
        {
            return nums[mid];
        }
        else if(nums[mid]==nums[mid-1])
        {
            if(mid%2==0)
            {
                end=mid-2;
            }
            else
            {
                start=mid+1;
            }
        }
        else if(nums[mid]==nums[mid+1])
        {
            if(mid%2!=0)
            {
                end=mid-1;
            }
            else
            {
                start=mid+2;
            }
        }
        else
        {
            return nums[mid];
        }
    }

    return 0;

    }
};
