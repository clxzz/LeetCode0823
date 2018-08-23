<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b)
{
    return a>b?a:b;
}

int main()
{
    int n;
    int A[n];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
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
    }
    return 0;
=======
#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b)
{
    return a>b?a:b;
}

int main()
{
    int n;
    int A[n];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
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
    }
    return 0;
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
}