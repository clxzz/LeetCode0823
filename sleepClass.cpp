#include <iostream>
#include <vector>
using namespace std;

long Max(long a, long b)
{
	return a>b?a:b;
}

void sleepClass(vector<long>& a, vector<int>& t, int n, int k)
{
	long res=0, ext=0, tmp=0;
		for(long i=0;i<n;i++)
		{
			if(t[i] == 1)
			{
				res+=a[i];
			}
		}
		for(int i=0;i<n-k;i++)
		{
			tmp=0;
			for(int j=i+1;j<=i+k && j<n;j++)
			{
				tmp = tmp + a[j] - a[j]*t[j];
			}
			ext=Max(ext,tmp);
		}
	cout<<res+ext<<endl;
}

int main()
{
	long n=6,k=3;
	vector<long> a={1,3,5,2,5,4};
	vector<int> t={1,1,0,1,0,0};
	sleepClass(a, t, n, k);
	return 0;
}