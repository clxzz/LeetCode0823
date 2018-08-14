#include <iostream>
#include <vector>
using namespace std;

void rotateImage(vector<vector<int> >& matrix)
{
	int m = matrix.size(), n = matrix[0].size();
	for(int i=0;i<m/2;i++)
	{
		int tmp = 0;
		for(int j=i;j<n-1-i;j++)
		{
			tmp = matrix[n-1-j][i];
			matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
			matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
			matrix[j][n-1-i] = matrix[i][j];
			matrix[i][j] = tmp;
		}
	}
}

int main()
{
	vector<vector<int> > matrix = {{1,2,3,4},{4,5,6,7},{7,8,9,10},{1,2,3,3}};
	rotateImage(matrix);
	int m = matrix.size(), n = matrix[0].size();
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<matrix[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}