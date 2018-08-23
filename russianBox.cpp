#include <iostream>
#include <vector>
using namespace std;

void russianBox(vector<int> height, int n)
{
	int minheight=height[1];
	for(int i=2;i<=n;i++)
	{
		if(height[i]<minheight)
		{
			minheight=height[i];
		}
	}
	cout<<minheight<<endl;
}

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		vector<int> c(m, 0);
		vector<int> height(n+1, 0);
		for(int i=0;i<m;i++)
		{
			cin>>c[i];
			height[c[i]]++;
		}
		russianBox(height, n);
	}
}