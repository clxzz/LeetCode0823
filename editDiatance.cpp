#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Min(int a, int b)
{
	return a<b?a:b;
}

int editDistance(string s1, string s2)
{
	int n1=s1.size(), n2=s2.size();
	vector<vector<int> > dp(n1+1, vector<int>(n2+1, 0));
	for(int i=0;i<=n1;i++)
	{
		dp[i][0]=i;
	}
	for(int j=0;j<=n2;j++)
	{
		dp[0][j]=j;
	}
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=n2;j++)
		{
			if(s1[i-1]==s2[j-1])
			{
				dp[i][j] = dp[i-1][j-1];
			}
			else
				dp[i][j] = Min(dp[i-1][j], Min(dp[i][j-1], dp[i-1][j-1])) + 1;
		}
	}
	return dp[n1][n2];
}

int main()
{
	string s1 = "bbc", s2 = "abcd";
	int res = editDistance(s1, s2);
	cout<<res<<endl;
	return 0;
}