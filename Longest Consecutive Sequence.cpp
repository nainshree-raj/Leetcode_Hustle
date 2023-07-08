QUESTION : Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

Example 1:
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

SOLUTION: class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int cnt=0,longest=0;
        unordered_set<int>st(a.begin(),a.end());
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end())
                {
                    cnt++;
                    x=x+1;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
};
