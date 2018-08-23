#include <iostream>
#include <vector>
using namespace std;

int getMaxIdx(vector<long> a)
{
	int idx=0;
	int n=a.size();
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[idx])
		{
			idx=i;
		}
	}
	return idx;
}

int getMinIdx(vector<long> a)
{
	int idx=0;
	int n=a.size();
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[idx])
		{
			idx=i;
		}
	}
	return idx;
}

void moveTower(vector<long>& a, int k)
{
	int m = 0, maxidx = 0, minidx = 0;
	vector<int> movemax;
	vector<int> movemin;
	for (int i = 0; i < k; i++)
	{
		minidx = getMinIdx(a);
		maxidx = getMaxIdx(a);
		//cout<<maxidx<<' '<<minidx<<endl;
		if (a[maxidx] >= a[minidx] + 2)
		{
			movemax.push_back(maxidx + 1);
			movemin.push_back(minidx + 1);
			a[maxidx]--;
			a[minidx]++;
			m++;
		}
		else
		{
			break;
		}
	}
	maxidx=getMaxIdx(a), minidx=getMinIdx(a);
	int h = a[maxidx] - a[minidx];
	cout << h << ' ' << m << endl;
	for (int i = 0; i < m; i++)
	{
		cout << movemax[i] << ' ' << movemin[i] << endl;
	}
}

int main()
{
	vector<long> a={8,8,6};
	moveTower(a, 2);	
	return 0;
}