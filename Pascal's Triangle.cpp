QUESTION : Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above.
  
Example 1:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
  
Example 2:
Input: numRows = 1
Output: [[1]]

SOLUTION : class Solution {
    vector<int> generateRows(int n)
    {
        vector<int>ans;
        int res=1;
        ans.push_back(res);
        for(int i=1;i<n;i++)
        {
            res=res*(n-i);
            res=res/i;
            ans.push_back(res);
        }
        return ans;
    }
    
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(generateRows(i));

        }
        return ans;
    }
};
