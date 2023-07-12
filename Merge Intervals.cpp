QUESTION : Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

SOLUTION : 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        vector<vector<int>>ans;
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++)
        {
            if(ans.empty() || ans.back()[1]<a[i][0])
            {
                ans.push_back(a[i]);
            }
            else
            {
                ans.back()[1]=max(ans.back()[1],a[i][1]);
            }
        }
        return ans;
    }
};
