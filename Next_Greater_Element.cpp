class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      vector<int>ans;
        unordered_map<int,int> unmp;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--)
        {
            int elem=nums2[i];
            while(!st.empty() && st.top()<=elem)
            {
                st.pop();
            }
            int res=(st.empty()) ? -1 : st.top();
            unmp.insert({elem,res});
            st.push(elem);
        }
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(unmp[nums1[i]]);
        }
        return ans;
