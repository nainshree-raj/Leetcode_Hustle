SOLUTION : 
#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
    int xr=0;
    unordered_map<int,int>mp;
    mp[xr]++;
    int cnt=0;
    int n =a.size();
    for(int i=0;i<n;i++)
    {
        xr=xr^a[i];
        int x=xr^b;
        cnt+=mp[x];
        mp[xr]++;
    }
    return cnt;
}
