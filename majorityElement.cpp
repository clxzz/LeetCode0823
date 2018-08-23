<<<<<<< HEAD
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int cnt1 = 0,cnt2 = 0;
        int num1 = 0, num2 = 1;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == num1)
            {
                cnt1++;
            }
            else if(nums[i] == num2)
            {
                cnt2++;
            }
            else if(cnt1 == 0)
            {
                num1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0)
            {
                num2 = nums[i];
                cnt2 = 1;
            }
            else
            {
                cnt1--;cnt2--;
            }
            
        }
        cnt1=0;cnt2=0;
        for(int i = 0;i<n;i++)
        {
            if(nums[i] == num1)
            {
                cnt1++;
            }
            else if(nums[i] == num2)
            {
                cnt2++;
            }
        }
        if(cnt1>n/3)
            res.push_back(num1);
        if(cnt2>n/3)
            res.push_back(num2);
        return res;
        
            
    }
=======
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int cnt1 = 0,cnt2 = 0;
        int num1 = 0, num2 = 1;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == num1)
            {
                cnt1++;
            }
            else if(nums[i] == num2)
            {
                cnt2++;
            }
            else if(cnt1 == 0)
            {
                num1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0)
            {
                num2 = nums[i];
                cnt2 = 1;
            }
            else
            {
                cnt1--;cnt2--;
            }
            
        }
        cnt1=0;cnt2=0;
        for(int i = 0;i<n;i++)
        {
            if(nums[i] == num1)
            {
                cnt1++;
            }
            else if(nums[i] == num2)
            {
                cnt2++;
            }
        }
        if(cnt1>n/3)
            res.push_back(num1);
        if(cnt2>n/3)
            res.push_back(num2);
        return res;
        
            
    }
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
};