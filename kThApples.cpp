#include <iostream>
#include <vector>
using namespace std;

void kThApples(vector<long>& a, vector<long>& q, long n, long m)
{
	for(int i=0;i<m; i++)
	{
		long curq=q[i], sum=0;
		for(int j=0;j<n;j++)
		{
			sum += a[j];
			if(sum>=curq)
			{
				cout<<j+1<<endl;
				break;
			}
		}
	}
}

int main()
{
	long n,m;
	while(cin>>n)
	{
		vector<long> a(n, 0);
		for(long i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>m; vector<long> q(m, 0);
		for(long i=0;i<m;i++)
		{
			cin>>q[i];
		}
		kThApples(a, q, n, m);
		return 0;
	}
}