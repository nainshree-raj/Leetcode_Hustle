QUESTION : Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

*Starting with any positive integer, replace the number by the sum of the squares of its digits.
*Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
*Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.
  
Example : 
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

SOLUTION :
class Solution 
{
public:
    bool isHappy(int n) 
    {
        int sum=0;
        unordered_set<int>st;
        
        if(n==1)return true;
        while(n)
        {
           
            sum=0;
            while(n>0)
            {
                int last=n%10;
                sum+=(last*last);
                n=n/10;
            }
            if(sum==1)
            {
                return true;
            }
            else if(st.find(sum)!=st.end())
            {
                return false;
            }
            st.insert(sum);
            n=sum; 
        }
        return false;
    }
};
