SOLUTION :
#include<vector>
#include<bits/stdc++.h>
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b)
{
	// Write your code here.
	int n1=a.size();
	int n2=b.size();
	int left=n1-1;
	int right=0;
	while(left>=0 || right<n2)
	{
		if(a[left]>b[right])
		{
			swap(a[left],b[right]);
			left--;
			right++;
		}
		else
		{
			
			break;
		}
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
}
