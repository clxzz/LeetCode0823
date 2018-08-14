#include <iostream>
#include <vector>
using namespace std;

long Max(long a, long b)
{
	return a>b?a:b;
}

int main()
{
	long n=6,k=5;

		vector<long> a={1,3,5,2,5,4};
		vector<int> t={1,1,0,1,0,0};
		long res=0, ext=0, tmp=0;
		for(long i=0;i<n;i++)
		{
			if(t[i] == 1)
			{
				res+=a[i];
			}
		}
		cout<<res<<endl;
		for(int i=0;i<n-k;i++)
		{
			tmp=0;
			for(int j=i+1;j<=i+k && j<n;j++)
			{
				tmp = tmp + a[j] - a[j]*t[j];
			}
			ext=Max(ext,tmp);
		}
		cout<<ext<<endl;
cout<<res+ext<<endl;
return 0;
}