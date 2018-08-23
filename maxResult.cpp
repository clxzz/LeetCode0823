#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b)
{
	return a>b?a:b;
}

void maxResult(int a, int b, int c)
{
	int res=0;
	int tmp1=a+b*c;
	int tmp2=a*b+c;
	int tmp3=a+b+c;
	int tmp4=a*b*c;
	int tmp5=a*(b+c);
	int tmp6=(a+b)*c;
	res = Max(res, tmp1);
	res = Max(res, tmp2);
	res = Max(res, tmp3);
	res = Max(res, tmp4);
	res = Max(res, tmp5);
	res = Max(res, tmp6);
	cout<<res<<endl;
}

int main()
{
	int a,b,c;
	while(cin>>a>>b>>c)
	{
		maxResult(a,b,c);
	}
	return 0;
}