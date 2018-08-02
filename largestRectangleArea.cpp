#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Min(int a, int b);
int Max(int a, int b);
int largestRectangleArea(vector<int>& h);
int maximalRectangle(vector<vector<char>>& matrix);

    int main()
    {
    	vector<int> h={2,1,5,6,2,3};
    	int res=largestRectangleArea(h);
    	cout<<res<<endl;
    	vector<vector<char> > matrix={{"1","0","1","0","0"},
								   	  {"1","0","1","1","1"},
								  	  {"1","1","1","1","1"},
								  	  {"1","0","0","1","0"}};

    	return 0;
    }

int largestRectangleArea(vector<int>& height)
{
		int res = 0, n=height.size();
        for (int i = 0; i < n; i++) 
        {
            if (i + 1 < n && height[i] <= height[i + 1]) 
            {
                continue;
            }
            int minH = height[i];
            for (int j = i; j >= 0; j--) 
            {
                minH = Min(minH, height[j]);
                int area = minH * (i - j + 1);
                res = Max(res, area);
            }
        }
        return res;
}

int maximalRectangle(vector<vector<char>>& matrix) 
{
	int m=matrix.size(), n=matrix[0].size();
	        
}

int Min(int a, int b)
{
	return a<b?a:b;
}
int Max(int a,int b)
{
	return a>b?a:b;
}