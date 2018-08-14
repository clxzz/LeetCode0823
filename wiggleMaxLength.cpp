#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
using namespace std;

    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        int res = 1;
        vector<int> up (n-1,0);
        //vector<int> dp (n-2,0);
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]>nums[i])
            {
                up[i] = 1;
            }
        }
        for(int i=0;i<n-2;i++)
        {
            if(up[i+1] != up[i])
            {
                res++;
            }
        }
        return res+1;
    }

    int main()
    {
        vector<int> nums = {1,17,5,10,13,15,10,5,16,18,2,3};
        vector<int> nums2 = {1,2,3,4,5,6,7,8,9,10};
        int res = wiggleMaxLength(nums2);
        cout<<res<<endl;
    }