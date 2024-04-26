QUESTION: There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].
Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.
You must decrease the overall operation steps as much as possible.

Example 1:
Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true

SOLUTION : 
class Solution {
public:
    bool search(vector<int>& a, int target) {
        int n =a.size();
        int low=0;
        int high = n-1;

        while(low<=high)
        {
            int mid = (low+high)/2;

            if(a[mid] == target) return true;

            else if(a[mid] == a[low] && a[mid] == a[high])
            {
                low= low+1;
                high = high-1;
                continue;
            }
            else if( a[low]<= a[mid] )
            {
                if(target <= a[mid] && target >=a[low])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(target <=a[high] && target >=a[mid])
                {
                    low=mid+1;
                }
                else
                {
                    high= mid-1;
                }

            }
        }
        return false;
    }
};
