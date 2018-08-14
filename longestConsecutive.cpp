#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int Max(int a, int b)
{
	return a>b?a:b;
}

int longestConsecutive(vector<int>& nums) 
{
	int res=0, n=nums.size();
    unordered_set<int> s(nums.begin(), nums.end());
    for(int i=0;i<n;i++)
    {
    	if(!s.count(nums[i]))
    	{
    		continue;
    	}
    	s.erase(nums[i]);
    	int pre = nums[i]-1, next = nums[i]+1;
    	while(s.count(pre))
    	{
    		s.erase(pre--);
    	}
    	while(s.count(next))
    	{
    		s.erase(next++);
    	}
    	res = Max(res, next-pre-1);
    }
    return res;
}

int main()
{
	vector<int> nums={100, 1,2,3,4,6,5,200};
	int res = longestConsecutive(nums);
	cout<<res<<endl;
	return 0;
}