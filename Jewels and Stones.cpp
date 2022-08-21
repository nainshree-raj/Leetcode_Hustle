QUESTION:
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
  
Example 2:
Input: jewels = "z", stones = "ZZ"
Output: 0
  
SOLUTION:
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        unordered_set <char> s1;
        for(int i=0;i<jewels.size();i++)
        {
            s1.insert(jewels[i]);
        }
        for(auto i:stones)
        {
            if(s1.find(i)!=s1.end())
                count++;
        }
        return count;
        }
};
