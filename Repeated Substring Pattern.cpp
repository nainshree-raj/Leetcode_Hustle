QUESTION : Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.
  
 Example 1:
Input: s = "abab"
Output: true
Explanation: It is the substring "ab" twice.
  
Example 2:
Input: s = "aba"
Output: false
  
SOLUTION :
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        vector<int>factors;
        int len=s.size();
        int f=1;
       // int res=len;
       if(len==1)
       {
           return false;
       }
        for(int i=1;i<=sqrt(len);i++)
        {
            if(len%i==0)
            {
                factors.push_back(i);
                if((len/i)!=len)
                factors.push_back(len/i);
            }
        }
        for(int i=0;i<factors.size();i++)
        {
            string s1 = s;
            int x = factors[i];
            string p = s.substr(0,x);
            //cout<<p<<" ";
            f = 1;
            for(int j = x; j < s.size(); j += x)
            {
                string t = s.substr(j, x);
               // cout<<t<<endl;
                if(t==p)
                continue;
                else
                {
                    f = 0;
                    break;
                }
            }
            if(f==1)
            return 1;
        }

        return 0;
    }
};
