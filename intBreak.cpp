#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int Max(int a, int b)
{
	return a>b?a:b;
}

int integerBreak(int n)
{
	vector<int> dp(n+1, 0);
	dp[1]=1, dp[2]=1;
	if(n==2 || n==1)
	{
		return 1;
	}
	for(int i=3;i<=n;i++)
	{
		dp[i]=Max(dp[i], (i/2)*(i-i/2));
		for(int j=1;j<i;j++)
		{
			dp[i]=Max(dp[i], j*dp[i-j]);
		}
	}
	return dp[n];
}

int main()
{
	int n=10;
	int res=integerBreak(n);
	cout<<res<<endl;
	return 0;
}