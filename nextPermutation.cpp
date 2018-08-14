#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums)
{
	int n = nums.size();
	int idx=n;
	for(int i = n-1;i>0;i--)
	{
		if(nums[i-1]<nums[i])
		{
			idx = i-1;
			break;
		}
	}
	if(idx == n)
	{
		sort(nums.begin(), nums.end());
	}
	else
	{
		for(int i = n-1;i>idx;i--)
		{
			if(nums[idx]<nums[i])
			{
				int tmp = nums[idx];
				nums[idx] = nums[i];
				nums[i] = tmp;
				break;
			}
		}
		sort(nums.begin()+idx+1, nums.end());
	}
	
}

int main()
{
	vector<int> nums1 = {3,2,1}, nums2 = {6,5,4,8,7,5,1};
	int n1 = nums1.size(), n2 = nums2.size();
	nextPermutation(nums1);
	nextPermutation(nums2);
	for(int i = 0;i<n1;i++)
	{
		cout<<nums1[i]<<' ';
	}
	cout<<endl;
	for(int i = 0;i<n2;i++)
	{
		cout<<nums2[i]<<' ';
	}
	cout<<endl;
}