#include <iostream>
#include <vector>
#include <string>
using namespace std;

int huiwenNums(string s, int idx_left, int idx_right)
{
	int n=s.size();
	int left, right, cnt;
	if(idx_right == idx_left)
	{
		cnt=1;
		left=idx_left-1;
		right=idx_right+1;
	}
	else 
	{
		cnt=0;
		left=idx_left;
		right=idx_right;
	}
	while(left>=0 && s[left] == s[right] && right<n)
	{
		cnt++;
		left--;
		right++;
	}
	return cnt;
}

int main()
{
	string s="aaaaaaaaa";
	int sum=0, n=s.size();
	for (int i=0;i<n;i++)
	{
		sum+=huiwenNums(s, i, i);
	}
	for(int i=0;i<n-1;i++)
	{
		sum+=huiwenNums(s, i,i+1);
	}
	cout<<sum<<endl;
	return 0;
}
