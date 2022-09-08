APPROACH : Greedy 
           checking if mirror exist or coming back to the mean position,
           assigning 1st object : +1 and 2nd object : -1
           and then suming up to the zero at the last.
QUESTION :
There is a robot starting at the position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.
You are given a string moves that represents the move sequence of the robot where moves[i] represents its ith move. Valid moves are 'R' (right), 'L' (left), 'U' (up), and 'D' (down).
Return true if the robot returns to the origin after it finishes all of its moves, or false otherwise.

Note: The way that the robot is "facing" is irrelevant. 'R' will always make the robot move to the right once, 
'L' will always make it move left, etc. Also, assume that the magnitude of the robot's movement is the same for each move.
  
 SOLUTION :
class Solution {
public:
    bool judgeCircle(string moves) {
     bool flag=false;
        int cnt1=0,cnt2=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L')
            {
                cnt1--;
            }
            else if(moves[i]=='D')
            {
                cnt2--;
            }
            else if(moves[i]=='R')
            {
                cnt1++;
            }
            else if(moves[i]=='U')
            {
                cnt2++;
            }      
        }
        if(cnt1==0 && cnt2==0)
        {
            flag=true;
        }
        return flag;
    }
};
