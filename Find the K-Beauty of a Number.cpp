QUESTION : The k-beauty of an integer num is defined as the number of substrings of num when it is read as a string that meet the following conditions:

It has a length of k.
It is a divisor of num.
Given integers num and k, return the k-beauty of num.

Note:
Leading zeros are allowed.
0 is not a divisor of any value.
A substring is a contiguous sequence of characters in a string.
  
EXAMPLE : 
Input: num = 240, k = 2
Output: 2
Explanation: The following are the substrings of num of length k:
- "24" from "240": 24 is a divisor of 240.
- "40" from "240": 40 is a divisor of 240.
Therefore, the k-beauty is 2.
  
SOLUTION : 
class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str;
        int cnt=0;
        string snum = to_string(num);
        for(int i=0 ; i<snum.size()-k+1 ;i++)
        {
            str = snum.substr(i,k);
            cout<<str<<"la";
            int istr=0;
            for(int j=0;j<str.size();j++)
            {
                istr = (istr*10) + (str[j]-'0');
            }
            if( (istr!=0) && (num%istr==0) )
            {
                cnt++;
            }
        }
        return cnt;
    }
};
