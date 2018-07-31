#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int nearestSum(vector<int> &nums, int target);
int Abs(int a, int b);
int Min(int a, int b);

int main()
{
	vector<int> nums = {-1,2,1,-4};
	int target = ;
	int res = nearestSum(nums, target);
	cout<<res<<endl;
	return 0;
}

int Abs(int a, int b)
{
	return a>b?(a-b):(b-a);
}
int Min(int a, int b)
{
	return a>b?b:a;
}
int nearestSum(vector<int> &nums, int target)
{
	int n = nums.size();
	int res = INT_MAX;
	int sum;
	for(int i = 0;i<n-2;i++)
	{
		for(int j = i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				sum=0;
				sum+=nums[i];
				sum+=nums[j];
				sum+=nums[k];
				int abs = Abs(sum,target);
				res = Min(abs, res);
			}
		}
	}
	return res;
}