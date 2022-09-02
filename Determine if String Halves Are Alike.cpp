QUESTION :
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.
Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.
Return true if a and b are alike. Otherwise, return false.
  
Example 1:
Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
  
SOLUTION :
class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        bool flag=false;
        int cnt1=0,cnt2=0;
        unordered_map<char,int>m1;
        m1['a']++;m1['e']++; m1['i']++; m1['o']++; m1['u']++; m1['A']++; 
        m1['E']++; m1['I']++; m1['O']++; m1['U']++;
        int nhalf=n/2;
        string fhalf=s.substr(0,nhalf);
        string sechalf=s.substr(nhalf);
        for(int i=0;i<fhalf.size();i++)
        {
            if(m1.find(fhalf[i])!=m1.end())
            {
               cnt1++;
            }
        }
        for(int i=0;i<sechalf.size();i++)
        {
            if(m1.find(sechalf[i])!=m1.end())
            {
               cnt2++;
            }
        }
        if(cnt1==cnt2)
        {
           flag=true;
        }
        return flag;
    }
};
