#include <iostream>
#include <limits.h>
using namespace std;

int secondMinusThird(int a, int b, int c, int d)
    {
        int max = INT_MIN, second = INT_MIN, third = INT_MIN;
        int array[4] = {a,b,c,d};
        for(int i = 0;i<4;i++)
        {
            if(array[i]>max)
            {
                third=second;second = max; max = array[i];
            }
            else if(array[i]>second)
            {
                third = second; second = array[i];
            }
            else if(array[i]>third)
            {
                third = array[i];
            }
        }
        return second-third;
    }
    
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int x1 = C-A, y1 = D-B, x2 = G-E, y2 = H-F;
        int s1 = x1*y1, s2 = x2*y2;
        if(B>=H || F>=D || A>=G || E>=C)
        {
            return s1+s2;
        }
        int crossx, crossy;
        crossx = secondMinusThird(A,C,E,G);
        crossy = secondMinusThird(B,D,F,H);
        return s1+s2-crossx*crossy;
    }

int main()
{
	int res = computeArea(-3,0,3,4,0,-1,9,2);
	cout<<res<<endl;
	int res1 = secondMinusThird(1,5,-10,4);
	cout<<res1<<endl;	
	return 0;
}