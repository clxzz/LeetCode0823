#include <iostream>
#include <vector>
#include <string>
using namespace std;


int Min(int a, int b)
{
	return a<b?a:b;
}
int Max(int a,int b)
{
	return a>b?a:b;
}

int maximalHistogram(vector<int> h)
{
	int n=h.size();
	int start=0,end=n-1,res=0;
	res=Min(h[start], h[end])*(end-start);
	while(start>end)
	{
		if(h[start]<h[end])
		{
			start++;
			res=Max(Min(h[start], h[end])*(end-atart), res);
		}
		else
		{
			end--;
			res=Max(Min(h[start], h[end])*(end-atart), res);
		}
	}
	return res;
}

int maximalRectangle(vector<vector<char>>& matrix) 
{

}

int main()
{
	vector<vector<char> > matrix={{"1","0","1","0","0"},
								  {"1","0","1","1","1"},
								  {"1","1","1","1","1"},
								  {"1","0","0","1","0"}};

}