QUESTION :
You are given a 0-indexed integer array nums. In one operation, you may do the following:
Choose two integers in nums that are equal.
Remove both integers from nums, forming a pair.
The operation is done on nums as many times as possible.
Return a 0-indexed integer array answer of size 2 where answer[0] is the number of pairs that are formed and answer[1] is the number of 
leftover integers in nums after doing the operation as many times as possible.
  
Example :
Input: nums = [1,3,2,1,3,2,2]
Output: [3,1]
Explanation:
Form a pair with nums[0] and nums[3] and remove them from nums. Now, nums = [3,2,3,2,2].
Form a pair with nums[0] and nums[2] and remove them from nums. Now, nums = [2,2,2].
Form a pair with nums[0] and nums[1] and remove them from nums. Now, nums = [2].
No more pairs can be formed. A total of 3 pairs have been formed, and there is 1 number leftover in nums.
  
SOLUTION :
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>m1;
        int leftcnt=0,paircnt=0;
        vector<int>ans(2);
        for(int i:nums)
        {
            m1[i]++;
        }
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            if(it->second==2)
            {
                paircnt++;
            }
            else{
                if(it->second>2){
                    int rem=(it->second)%2;
                    leftcnt+=rem;
                    int quo=(it->second)/2;
                    paircnt+=quo;
                }
                else
                {
                    leftcnt++;
                }
            }
        }
        ans[0]=paircnt;
        ans[1]=leftcnt;
        return ans;  
    }
};
