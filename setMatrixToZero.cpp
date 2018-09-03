#include <iostream>
#include <vector>
using namespace std;

void zeroMatrix(vector<vector<int> >& matrix)
{
	int m=matrix.size(), n=matrix[0].size();
	vector<vector<int>> zero(m, vector<int>(n, 0));
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]==0)
			{
				zero[i][j]=1;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(zero[i][j] == 1)
			{
				for(int k=0;k<m;k++)
				{
					matrix[k][j]=0;
				}
				for(int k=0;k<n;k++)
				{
					matrix[i][k]=0;
				}
			}
		}
	}
}

void zeroMatrix2(vector<vector<int> >& matrix)
{
	int m=matrix.size(), n=matrix[0].size();
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			matrix[i][j]+=2;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((matrix[i][j] & 1) == 0)
			{
				for(int k=0;k<m;k++)
				{
					matrix[k][j] &= 1;
				}
				for(int k=0;k<n;k++)
				{
					matrix[i][k] &= 1;
				}
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			matrix[i][j] >>= 1;
		}
	}
}

int main()
{
	vector<vector<int> > matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
	zeroMatrix2(matrix);
	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[0].size();j++)
		{
			cout<<matrix[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}