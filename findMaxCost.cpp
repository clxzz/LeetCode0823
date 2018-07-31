  #include <iostream>
#include <math.h>
#include <limits.h>
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
        
    
    int getMoneyAmount(int n) {
        vector<vector<int> > dp (n+1, vector<int> (n+1,0));
        for(int i = n-1;i>0;i--)
        {
            for(int j = i+1;j<=n;j++)
            {
                int ans = INT_MAX;
                for(int k = i;k<j;k++)
                {
                    ans = Min(ans, k+Max(dp[i][k-1], dp[k+1][j]));
                }
                dp[i][j] = ans;
                
            }
        }
        return dp[1][n];
    }

    int getMoneyAmount2(int n) {
        vector<vector<int> > dp (n+1, vector<int> (n+1,0));
        for(int i = 1;i<=n;i++)
        {
            for(int j = 1;j<i;j++)
            {
                int ans = INT_MAX;
                for(int k = j;k<i;k++)
                {
                    ans = Min(ans, k+Max(dp[j][k-1], dp[k+1][i]));
                }
                dp[j][i] = ans;
            }
        }
        return dp[1][n];
    }

    int main()
    {
        int n = 100;
        int res = getMoneyAmount(n);
        int res2 = getMoneyAmount2(n);
        cout<<res<<' '<<res2<<endl;
    }