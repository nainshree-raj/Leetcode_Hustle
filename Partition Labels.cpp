QUESTION :

You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part.
Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.
Return a list of integers representing the size of these parts.
  
Example 1:

Input: s = "ababcbacadefegdehijhklij"
Output: [9,7,8]

Explanation:
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.  
  
SOLUTION :
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int>mp;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            mp[s[i]]=i;
        }
        int prev=-1;
        int maxi=0;
        for(int i=0;i<n;i++)
        { 
            maxi=max(maxi,mp[s[i]]);
            if(maxi==i)
            {
                int res=maxi-prev;
                ans.push_back(res);
                prev=maxi;
            }
        }
        return ans;
    }
};
