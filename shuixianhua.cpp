#include <iostream>
using namespace std;

int main()
{
	int m=100, n=999;
	bool ext=false;
	for(int i=m;i<=n;i++)
	{
		int tmp=i;
		int n1=tmp%10;
		tmp=tmp/10;
		int n2=tmp%10;
		tmp=tmp/10;
		int n3=tmp%10;
		if(n1*n1*n1+n2*n2*n2+n3*n3*n3 == i)
		{
			cout<<i<<' ';
			ext=true;
		}
	}
	if(ext==false)
	{
		cout<<"no"<<endl;
	}
	else
	{
		cout<<endl;
	}
}