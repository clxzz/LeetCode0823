#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

double randomPickNum(vector<double> nums)
{
    int n = nums.size();
    double nums_sum = 0;
    sort(nums.begin(), nums.end());
    for(int i=0;i<n;i++)
    {
        nums_sum += nums[i];
    }
    srand((unsigned)time(NULL));
    double pivot = rand() / 32767.0 * nums_sum, sum=0, res;
    //cout<<pivot<<' ';
    for(int i=0;i<n;i++)
    {
        sum += nums[i];
        if(sum>pivot)
        {
            res = nums[i];
            break;
        }
    }
    return res;
}

int main()
{
    vector<double> nums = {1,1.2,3,0.3,2.2};
    vector<double> res;
    // int idx1 = randomPickNum(nums), idx2 = randomPickNum(nums);
    // res.push_back(nums[idx1]);
    // res.push_back(nums[idx2]);
    // cout<<res[0]<<' '<<res[1]<<endl;
    for (int i=0;i<100;i++)
    {
        cout<<randomPickNum(nums)<<' ';
    }
    cout<<endl;
    return 0;
}