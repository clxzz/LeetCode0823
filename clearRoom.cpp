#include <iostream>
#include <vector>
using namespace std;

void clearRoom()
{

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
		
	}
}