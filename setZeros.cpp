<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int> >& matrix)
{
	int m = matrix.size(), n = matrix[0].size();
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<matrix[i][j]<<' ';
		}
		cout<<endl;
	}
}

void setZeroes(vector<vector<int> >& matrix)
{
	int m = matrix.size(), n = matrix[0].size();
	
}

int main()
{
	vector<vector<int> > matrix = {{1,1,1}, {1,0,1},{1,1,1}};
	setZeroes(matrix);
	printMatrix(matrix);
=======
#include <iostream>
#include <vector>
using namespace std;

void printMatrix(vector<vector<int> >& matrix)
{
	int m = matrix.size(), n = matrix[0].size();
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<matrix[i][j]<<' ';
		}
		cout<<endl;
	}
}

void setZeroes(vector<vector<int> >& matrix)
{
	int m = matrix.size(), n = matrix[0].size();
	
}

int main()
{
	vector<vector<int> > matrix = {{1,1,1}, {1,0,1},{1,1,1}};
	setZeroes(matrix);
	printMatrix(matrix);
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
}