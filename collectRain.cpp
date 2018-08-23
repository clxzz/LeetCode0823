<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b)
{
	return a>b?a:b;
}

int collectRain(vector<int>& nums)
{
	int n=nums.size();
	int res=0, left=0, right=n-1, leftMax=0, rightMax=0;
	while(left<right)
	{
		leftMax = Max(leftMax, nums[left]);
		rightMax = Max(rightMax, nums[right]);   //双指针从两侧向中间走 保存左右极值， 比极值小即可存雨水。
		if(leftMax<=rightMax)
		{
			if(leftMax>nums[left])
			{
				res += leftMax-nums[left];
			}
			left++;
		}
		else
		{
			if(rightMax>nums[right])
			{
				res += rightMax-nums[right];				
			}
			right--;
		}
	}
	return res;
}

int main()
{
	vector<int> nums={0,1,0,2,1,0,1,3,2,1,2,1};
	int res=collectRain(nums);
	cout<<res<<endl;
	return 0;
=======
#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b)
{
	return a>b?a:b;
}

int collectRain(vector<int>& nums)
{
	int n=nums.size();
	int res=0, left=0, right=n-1, leftMax=0, rightMax=0;
	while(left<right)
	{
		leftMax = Max(leftMax, nums[left]);
		rightMax = Max(rightMax, nums[right]);   //双指针从两侧向中间走 保存左右极值， 比极值小即可存雨水。
		if(leftMax<=rightMax)
		{
			if(leftMax>nums[left])
			{
				res += leftMax-nums[left];
			}
			left++;
		}
		else
		{
			if(rightMax>nums[right])
			{
				res += rightMax-nums[right];				
			}
			right--;
		}
	}
	return res;
}

int main()
{
	vector<int> nums={0,1,0,2,1,0,1,3,2,1,2,1};
	int res=collectRain(nums);
	cout<<res<<endl;
	return 0;
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
}