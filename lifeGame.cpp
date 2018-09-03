#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b)
{
	return a>b?a:b;
}

int Min(int a, int b)
{
	return a<b?a:b;
}

void gameOfLife(vector<vector<int>>& lifestatus)
{
	int m=lifestatus.size();
	int n=lifestatus[0].size();
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int cnt=0;
			for(int k=Max(i-1,0);k<Min(i+2,m);k++)
			{
				for(int l=Max(j-1, 0);l<Min(j+2,n);j++)
				{
					cnt += lifestatus[k][l] & 1;   //与1进行与运算 判断最后一位是否是一
				}
			}
			cnt-=lifestatus[i][j];
			if(cnt==3 || (cnt==2 && lifestatus[i][j]))
			{
				lifestatus[i][j] |= 2;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			lifestatus[i][j] >>= 1;
		}
	}
}

void gameOfLife1(vector<vector<int>>& board) {
        int row(board.size()), column(board[0].size());
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                int count = 0;
                for (int I = max(i - 1, 0); I < min(i + 2, row); I++)
                    for (int J = max(j - 1, 0); J < min(j + 2, column); J++)
                        count += board[I][J] & 1;
                count-=board[i][j];
                if (count == 3 || (count == 2 && board[i][j]))
                    board[i][j] |= 2;
            }
        }
        for (int i = 0; i < row; i++)
            for (int j = 0; j < column; j++)
                board[i][j] >>= 1;
    }

int main()
{
	vector<vector<int> > lifestatus={{0,1,0},{0,0,1},{1,1,1},{0,0,0}};
	gameOfLife(lifestatus);
	for(int i=0;i<lifestatus.size();i++)
	{
		for(int j=0;j<lifestatus[0].size();j++)
		{
			cout<<lifestatus[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
} 