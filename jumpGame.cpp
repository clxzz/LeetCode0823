#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b)
{
	return a>b?a:b;
}

bool jumpGame(vector<int>& nums)
{
	int n = nums.size();
	int reach = 0, i=0;
	while(i<n && i<=reach)  //如果i>reach则无法前进
	{
		reach=Max(reach, i+nums[i]);
		i++;
	}
	return reach>=n-1;
}

int jumpTimes(vector<int>& nums) {
        int n=nums.size(), maxReach = 0, reached=0, times=0;
        for(int i=0;i<n;i++)
        {
            if(reached<i)
            {
                times++;
                reached = maxReach;
            }
            maxReach = Max(maxReach, nums[i]+i);
        }
        return times;
    }

int main()
{
	vector<int> nums={3,2,10,0,0,0,0,0,0,0,0,4};
	bool res = jumpGame(nums);
	int res1 = jumpTimes(nums);
	cout<<res<<' '<<res1<<endl;
}
