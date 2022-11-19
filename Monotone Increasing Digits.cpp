APPROACH : GREEDY 

QUESTION : 
An integer has monotone increasing digits if and only if each pair of adjacent digits x and y satisfy x <= y.
Given an integer n, return the largest number that is less than or equal to n with monotone increasing digits.

Example :

Input: n = 332
Output: 299
  
SOLUTION : 
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string str=to_string(n);
        int size=str.size();
        cout<<size<<endl;
        int violation=size;
        for(int i=size-1;i>0;i--)
        {
            if(str[i-1]-'0' > str[i]-'0')
            {
                 violation = i-1;
                cout<<violation<<endl;
                str[i-1]--;
            }
        }
        for(int j=violation+1;j<size;j++)
        {
            str[j]='9';
        }
        int ans= stoi(str);
        return ans;
    }
};
