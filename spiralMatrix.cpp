#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int Min(int a, int b)
    {
        return a<b?a:b;
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty())
            return res;
        int m = matrix.size(),n = matrix[0].size();
        int loops = Min(m,n) / 2;
        int mod = Min(m,n) % 2;
        for (int i = 0;i<loops;i++)
        {
            for(int j=i;j<n-1-i;j++)
            {
                res.push_back(matrix[i][j]);
            }
            for(int j=i;j<m-1-i;j++)
            {
                res.push_back(matrix[j][n-1-i]);
            }
            for(int j = n-1-i;j>i;j--)
            {
                res.push_back(matrix[m-1-i][j]);
            }
            for(int j = m-1-i;j>i;j--)
            {
                res.push_back(matrix[j][i]);
            }
        }
        if(mod == 1)
        {
            if(m == n)
                res.push_back(matrix[loops][loops]);
            else if(m>n)
            {
                for(int i = loops;i<m-loops;i++){
                    res.push_back(matrix[i][loops]);
                }
            }
            else{
                for(int i = loops;i<n-loops;i++){
                    res.push_back(matrix[loops][i]);
                }
            }
        }
        return res;
    }
    
int main()
{

    vector<vector<int> > matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> res = spiralOrder(matrix);
    int n = res.size();
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<' ';
    }
    return 0;

}
