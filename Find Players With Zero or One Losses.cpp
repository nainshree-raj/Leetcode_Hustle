QUESTION :
You are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match.

Return a list answer of size 2 where:
answer[0] is a list of all players that have not lost any matches.
answer[1] is a list of all players that have lost exactly one match.
The values in the two lists should be returned in increasing order.

Note:
You should only consider the players that have played at least one match.
The testcases will be generated such that no two matches will have the same outcome.
 
Example 1:

Input: matches = [[1,3],[2,3],[3,6],[5,6],[5,7],[4,5],[4,8],[4,9],[10,4],[10,9]]
Output: [[1,2,10],[4,5,7,8]]
Explanation:
Players 1, 2, and 10 have not lost any matches.
Players 4, 5, 7, and 8 each have lost one match.
Players 3, 6, and 9 each have lost two matches.
Thus, answer[0] = [1,2,10] and answer[1] = [4,5,7,8].
  
SOLUTION :
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>ans1,ans0;
        vector<vector<int>>res;
        //answer[1]
        map<int,int>lose;
        
        for(int i=0;i<matches.size();i++)
        {
                lose[matches[i][1]]++;
        }
        for(auto it:lose)
        {
            if(it.second==1)
            {
                ans1.push_back(it.first);
            }
        }
        //answer[0]
        set<int>win;
        for(int i=0;i<matches.size();i++)
        {
            win.insert(matches[i][0]);
        }
        
        for(auto it:win)
        {
            if(lose.find(it)==lose.end())
            {
                ans0.push_back(it);
            }
        }
        res.push_back(ans0);
        res.push_back(ans1);
        return res;
    }
};
