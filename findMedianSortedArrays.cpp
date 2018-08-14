#include <iostream>
#include <vector>
using namespace std;


int findKth(vector<int> nums1, vector<int> nums2, int k);
int Min(int a, int b);

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
 {
        int i = 0,j=0, n1 = nums1.size(), n2 = nums2.size();
        double res;
        vector<int> nums(n1+n2,0);
        int k=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            {
                nums[k++]=nums1[i++];
            }
            else
            {
                nums[k++]=nums2[j++];
            }
        }
        while(i == n1-1)
        {
            nums[k++]=nums2[j++];
        }
        while(j == n2-1)
        {
            nums[k++]=nums1[i++];
        }
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<' ';
        }
        if(n/2 == 0)
        {
            res = (nums[n/2-1]+nums[n/2-1])/2;
        }
        else
        {
            res = (double)nums[n-1/2];
        }
        return res;
    }

double findMedianSortedArrays2(vector<int>& nums1, vector<int>& nums2)
{
    int n1=nums1.size(),n2 = nums2.size();
    int res1 = findKth(nums1, nums2, (n1+n2+1)/2);
    int res2 = findKth(nums1, nums2, (n1+n2+2)/2);
    return (res1+res2)/2.0;
}

int Min(int a, int b)
{
    return a<b?a:b;
}

int findKth(vector<int> nums1, vector<int> nums2, int k)
{
    int n1=nums1.size(),n2 = nums2.size();
    if(n1>n2)
    {
        return findKth(nums2, nums1,k);
    }
    if(n1 == 0)
    {
        return nums2[k-1];
    }
    if(k == 1)
    {
        return nums1[0]<nums2[0]?nums1[0]:nums2[0];
    }
    int i=Min(n1, k/2),j=Min(n2, k/2);
    if(nums1[i-1]>nums2[j-1])
    {
        return findKth(nums1, vector<int>(nums2.begin()+j, nums2.end()), k-j);
    }
    else
    {
        return findKth(vector<int>(nums1.begin()+i, nums1.end()), nums2, k-i);
    }
    return 0;    
}

    int main()
    {
        vector<int> nums1={1,2};
        vector<int> nums2={3,4};
        double res=findMedianSortedArrays2(nums1, nums2);
        cout<<res<<endl;
        return 0;
    }