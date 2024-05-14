QUESTION : 162. Find Peak Element
A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.
You must write an algorithm that runs in O(log n) time.

 
Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.

SOLUTION : 
class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int low=0;
        int n=a.size();
        int high=n-1;

        if(n==1) return 0;
        
        while(low<=high)
        {
            int mid=low+((high-low)/2);

            if((mid>0) && (mid<(n-1)))
            {
                if((a[mid] > a[mid-1]) && (a[mid] > a[mid+1]) )
                {
                    return mid;
                }
                else if(a[mid-1]>a[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else if(mid==0)
            {
                if(a[1]<a[0])
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            else if(mid==(n-1))
            {
                if(a[n-1]>a[n-2])
                {
                    return (n-1);
                }
                else
                {
                    return (n-2);
                }
            }

        }
        return -1;
    }
};
