#include <iostream>
#include <vector>
using namespace std;

int divideCandy(vector<int>& nums)
{
	int n=nums.size();
	vector<int> res(n,1);
	for(int i=0;i<n-1;i++)
	{
		if(nums[i+1]>nums[i])
		{
			res[i+1] = res[i]+1;
		}
	}
	for(int i=n-1;i>0;i++)
	{
		if(nums[i-1]>nums[i])
		{
			res[i-1]=res[i]+1;
		}
	}
	int ress=0;
	for(int i=0;i<n;i++)
	{
		ress+=res[i];
		cout<<res[i]<<' ';
	}
	return ress;
}

int main()
{
	vector<int> nums={1,0,2};
	int res=divideCandy(nums);
	cout<<res<<endl;
	return 0;
}