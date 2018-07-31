#include <iostream>
using namespace std;

int main()
{
    int n=4;
    int A[n] = {4,2,1,3};

        int max1=0,max2=0,max3=0,min1=0,min2=0;
        for(int i=0;i<n;i++)
        {
            if(A[i]>max1)
            {
                max3 = max2;
                max2 = max1;
                max1 = A[i];
            }
            else if(A[i]>max2)
            {
                max3 = max2;
                max2 = A[i];
            }
            else if(A[i]>max3)
                max3 = A[i];
            
            if(A[i]<min1)
            {
                min2 = min1;
                min1 = A[i];
            }
            else if(A[i]<min2)
                min2 = A[i];
        }
        int res1 = max1*max2*max3;
        int res2 = max1*min1*min2;
        int res = res1>res2?res1:res2;
        cout<<res<<endl;
    return 0;
}