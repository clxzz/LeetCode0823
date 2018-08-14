#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n=;
	int x[n],y[n];

		for(int i = 0;i<n;i++)
		{
			cin>>x[i]>>y[i];
		}
		vector<int> x_cnt(201,0);
		vector<int> y_cnt(201,0);
		for(int i = 0;i<n;i++)
		{
			x_cnt[x[i]+100]++;
			y_cnt[y[i]+100]++;

		}
		int res = n*(n-1)*(n-2) / 6;
		int xcnt, ycnt;
		for(int i = 0;i<201;i++)
		{
			xcnt = x_cnt[i];ycnt = y_cnt[i];
			if(xcnt>=3)
			{
				res -= (xcnt-1)*(xcnt-2)*xcnt / 6;
			}
			if(ycnt>=3)
			{
				res -= (ycnt-1)*(ycnt-2)*ycnt / 6;
			}
			
		}
		cout<<res<<endl;


	}
	return 0;
}