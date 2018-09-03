#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	int n=81, m=19;
	float sum=0;
	float tmp=(float)n;
	for(int i=0;i<m;i++)
	{
		sum+=tmp;
		tmp = sqrt(tmp);
	}
	printf("%.2f\n", sum);
}