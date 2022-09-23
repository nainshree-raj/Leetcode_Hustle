QUESTION : 
Given a list of strings words and a string pattern, return a list of words[i] that match pattern. You may return the answer in any order.
A word matches the pattern if there exists a permutation of letters p so that after replacing every letter x in the pattern with p(x), we get the desired word.
Recall that a permutation of letters is a bijection from letters to letters: every letter maps to another letter, and no two letters map to the same letter.

Example 1:
Input: words = ["abc","deq","mee","aqq","dkd","ccc"], pattern = "abb"
Output: ["mee","aqq"]
Explanation: "mee" matches the pattern because there is a permutation {a -> m, b -> e, ...}. 
"ccc" does not match the pattern because {a -> c, b -> c, ...} is not a permutation, since a and b map to the same letter.

SOLUTION :
class Solution {
public:
    vector<int> getpattern(string word)
    {
        unordered_map<char,int>mp;
        int index=1;
        vector<int>ans;
        for(int i=0;i<word.size();i++)
        {
            if(mp.find(word[i])==mp.end())
            {
                mp[word[i]]=index;
                index++;
                ans.push_back(mp[word[i]]);
            }
            else
            {
                ans.push_back(mp[word[i]]);
            }
        }
        return ans;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>res;
        for(int i=0;i<words.size();i++)
        {
            if(getpattern(pattern)==getpattern(words[i]))
            {
                res.push_back(words[i]);
            }
        }
        return res;
    }
};
