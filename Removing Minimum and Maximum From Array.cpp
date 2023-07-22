QUESTION: You are given a 0-indexed array of distinct integers nums. There is an element in nums that has the lowest value and an element that has the highest value. We call them the minimum and maximum respectively. Your goal is to remove both these elements from the array.
A deletion is defined as either removing an element from the front of the array or removing an element from the back of the array.
Return the minimum number of deletions it would take to remove both the minimum and maximum element from the array.

Example 1:
Input: nums = [2,10,7,5,4,1,8,6]
Output: 5
Explanation: 
The minimum element in the array is nums[5], which is 1.
The maximum element in the array is nums[1], which is 10.
We can remove both the minimum and maximum by removing 2 elements from the front and 3 elements from the back.
This results in 2 + 3 = 5 deletions, which is the minimum number possible.

SOLUTION :
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        {
            return 1;
        }
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int min_index=0,max_index=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<mini)
            {
                min_index=i;
                mini=nums[i];
            }
            if(nums[i]>maxi)
            {
                max_index=i;
                maxi=nums[i];
            }
        }

        int front = max(min_index,max_index)+1;
        int back = n - min(min_index,max_index);
        int front_back = (min(min_index,max_index) +1) + (n - max(min_index,max_index));

        return min(min(front,back),front_back);
       


    }
};
