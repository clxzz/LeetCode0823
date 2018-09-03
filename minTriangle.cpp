#include <iostream>
#include <vector>
using namespace std;

int Min(int a, int b)
{
	return a<b?a:b;
}

int minSum(vector<vector<int> >& triangle)
{
	int m=triangle.size();
	int n=triangle[m-1].size();
	vector<int> dp=triangle[m-1];
	for(int i=m-2;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		{
			dp[j] = triangle[i][j] + Min(dp[j], dp[j+1]);
		}
	}
	return dp[0];
}

int main()
{
	vector<vector<int> > triangle={{2},{3,4},{6,5,7},{4,1,8,3}};
	int res=minSum(triangle);
	cout<<res<<endl;
	return 0;
}