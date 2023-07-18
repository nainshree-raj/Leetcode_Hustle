(positives and zeroes)

SOLUTION : 
  int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int right=0,left=0;
    int n=a.size();
    int maxi=0;
    long long sum=a[0];
    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum-=a[left];
            left++;
        }
        
        if(sum==k)
        {
            maxi=max(maxi,right-left+1);
        }
        right++;
        if(right<n)
        {
            sum+=a[right];
        }
    }
    return maxi;
}
