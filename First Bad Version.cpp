QUESTION :
You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.
Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

Example 1:
Input: n = 5, bad = 4
Output: 4
Explanation:
call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true
Then 4 is the first bad version.
  
SOLUTION :
// BINARY SEARCH APPROACH -- TO FIND FIRST INDEX OF ANYTHING
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //binary search
        int low=0;
        int high=n;
        if(n==1)
        {
            if(isBadVersion(n))
            {
                return n;
            }
            else
            {
                return 0;
            }
        }
        while(low<high)
        {
            int mid=low+((high-low)/2);
            if(isBadVersion(mid))
            {
                if(isBadVersion(mid-1))
                {
                    high=mid-1;
                }
                else
                {
                    return mid;
                }
            }
            else
            {
                if(isBadVersion(mid+1))
                {
                    return mid+1;
                }
                else
                {
                    low=mid+1;
                }
                
            }
        }
        return 0;
    }
};
