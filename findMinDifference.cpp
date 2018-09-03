#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;

int Min(int a, int b)
{
	return a<b?a:b;
}

int findMinDifference(vector<string>& timePoints) 
{
    int n=timePoints.size(), res;
    vector<int> minutes(n, 0);
    for(int i=0;i<n;i++)
    {
    	string tmp=timePoints[i];
    	minutes[i]=(tmp[4]-'0')+(tmp[3]-'0')*10;
    	minutes[i]+=((tmp[1]-'0')+(tmp[0]-'0')*10)*60;
    }
    sort(minutes.begin(), minutes.end());
    minutes.push_back(minutes[0]+24*60);
    //printf("%d %d %d\n", minutes[0], minutes[1], minutes[2]);
    res=minutes[1]-minutes[0];
    for(int i=1;i<n;i++)
    {
    	res=Min(res, minutes[i+1]-minutes[i]);
    }
    return res;
}

int main()
{
	vector<string> timePoints={"23:59","00:00"};
	int minute=findMinDifference(timePoints);
	//cout<<timePoints[0][0]-'0'<<endl;
	cout<<minute<<endl;
	return 0;
}