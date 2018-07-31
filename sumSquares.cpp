#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int Min(int a, int b)
    {
        return a>b?b:a;
    }

    int numSquares(int n)
    {
        vector<int> dp(n+1,0);
        dp[1] = 1;
        for(int i = 1;i<=n;i++)
        {
            int sqr = (int)math.sqrt(i);
            if(sqr*sqr == i)
                dp[i] = 1;
            else
                for(int j = 1;j<=i/2;j++)
                {
                    dp[i] = Min(dp[j],dp[i-j]);
                }
        }
        return dp[n];
    }

int main()
{
    int n = 13;
    int res = numSquares(n);
    cout<<res<<endl;
}