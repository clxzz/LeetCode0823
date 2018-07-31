#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b)
{
    return a>b?a:b;
}

int main()
{
    int n=8;
    vector<int> A = {2,5,3,1,2,3,4,8};


        int res=0;
        for(int i = 1;i<n-1;i++)
        {
            int start = i-1, end = i+1;
            if(A[start]>A[i] && A[end]>A[i])
            {
                //res = 3;
                while(A[start]>A[start+1] && start>=0)
                {
                    start--;
                }
                while(A[end]>A[end-1] && end<n)
                {
                    end++;
                }
                res = Max(res, end-start-1);
            }
        }
        cout<<res<<endl;

    return 0;
}