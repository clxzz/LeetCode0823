#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int Min(int a, int b)
{
	return a<b?a:b;
}

int Max(int a, int b)
{
	return a>b?a:b;
}

int maxProfitOnce(vector<int> prices)
{
	int n=prices.size();
	if(n==0)
	{
		return 0;
	}
	int res=0, minprice=prices[0];
	for(int i=1;i<n;i++)
	{
		res=Max(res, prices[i]-minprice);
		minprice=Min(minprice, prices[i]);
	}
	return res;
}

int maxProfitInftimes(std::vector<int> prices)
{
	int n=prices.size();
	if(n==0)
	{
		return 0;
	}
	int res=0;
	for(int i=1;i<n;i++)
	{
		res += Max(0, prices[i]-prices[i-1]);
	}
	return res;
}

int main()
{
	vector<int> prices={7,1,5,3,6,4};
	int res=maxProfitOnce(prices);
	//cout<<res<<endl;
	int res2=maxProfitInftimes(prices);
	printf("%d %d \n", res, res2);
	return 0;
}