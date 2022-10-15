QUESTION :
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
  
EXAMPLE 1: Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
  
SOLUTION : 
class Solution {
public:
    int trap(vector<int>& height) {
        //two pointers approach
        int res=0,left=0,right=height.size()-1,leftmax=0,rightmax=0;
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>leftmax)leftmax=height[left];
                else res+=(leftmax-height[left]);
                
                left++;
            }
            else
            {
                if(height[right]>rightmax)rightmax=height[right];
                else res+=(rightmax-height[right]);
                
                right--;
            }
        }
        return res;
    }
};
