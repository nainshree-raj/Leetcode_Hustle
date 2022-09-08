QUESTION :
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1.
If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.

SOLUTION : 
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int m=word1.size();
        int n=word2.size();
        int k=max(m,n);
        for(int i=0;i<k;i++)
        {
            if(m)
            {
                ans.push_back(word1[i]);
                m--;
            }
            if(n)
            {
                ans.push_back(word2[i]);
                n--;
            }
        }
        return ans;
    }
};
