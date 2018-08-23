<<<<<<< HEAD
 #include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
using namespace std;

 int findPeakElement(vector<int>& nums) {
        /*int n = nums.size();
        nums.push_back(-DBL_MAX);
        if(n == 1)
            return 0;
        int res;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            {
                res=i;
                break;
            }
        }
        return res;*/
        int n = nums.size();
        int start = 0,end = n-1;
        while(start<end)
        {
            int mid = (start + end) / 2;
            if(nums[mid+1]>nums[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid;
            }
        }
        return start;
    }

    int main()
    {
        vector<int> nums = {1,2,3,1};
        int res = findPeakElement(nums);
        cout<<res<<endl;
=======
 #include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
using namespace std;

 int findPeakElement(vector<int>& nums) {
        /*int n = nums.size();
        nums.push_back(-DBL_MAX);
        if(n == 1)
            return 0;
        int res;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            {
                res=i;
                break;
            }
        }
        return res;*/
        int n = nums.size();
        int start = 0,end = n-1;
        while(start<end)
        {
            int mid = (start + end) / 2;
            if(nums[mid+1]>nums[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid;
            }
        }
        return start;
    }

    int main()
    {
        vector<int> nums = {1,2,3,1};
        int res = findPeakElement(nums);
        cout<<res<<endl;
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
    }