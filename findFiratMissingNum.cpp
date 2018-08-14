#include <iostream>
#include <vector>
using namespace std;

int findFirstMissingNum(vector<int> nums)
{
	int n=nums.size();
	if(n==0)
		return 1;
	for(int i=0;i<n;i++)
	{
		if(nums[i]<=0)
			continue;
		while(nums[i]>0 && nums[i]<i+1 && nums[i] != nums[nums[i]-1])
		{
			int tmp = nums[nums[i]-1];
			nums[nums[i]-1] = nums[i];
			nums[i] = tmp;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(nums[i]!=i+1)
		{
			return i+1;
		}
	}
	return n+1;
}

int main()
{
	vector<int> nums={3,4,-1,2};
	int res = findFirstMissingNum(nums);
	cout<<res<<endl;
	return 0;
}