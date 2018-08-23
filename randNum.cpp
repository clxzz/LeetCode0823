<<<<<<< HEAD
#include <iostream> 
#include <time.h>  
#include <vector>
#include <algorithm>
using namespace std;  

int randomPickNum(vector<double> nums)
{
	srand(time(NULL)); int n=nums.size(), res=0;
	double nums_sum=0;
	for(int i=0;i<n;i++)
	{
		nums_sum+=nums[i];
	}
	double pivot=rand()/32767.0*nums_sum;
	cout<<pivot<<endl;
	sort(nums.begin(), nums.end());
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=nums[i];
		if(sum>pivot)
		{
			res=i;
			break;
		}
	}
	return res;
}

int main() 
{  
	vector<double> nums={1,1.2,3.0,0.3,2.2};
	// for(int i=0;i<20;i++)
	// {
	// 	cout<<randomPickNum(nums)<<' ';
	// }
	cout<<randomPickNum(nums)<<' ';
	cout<<randomPickNum(nums)<<' ';
	return 0; 
=======
#include <iostream> 
#include <time.h>  
#include <vector>
#include <algorithm>
using namespace std;  

int randomPickNum(vector<double> nums)
{
	srand(time(NULL)); int n=nums.size(), res=0;
	double nums_sum=0;
	for(int i=0;i<n;i++)
	{
		nums_sum+=nums[i];
	}
	double pivot=rand()/32767.0*nums_sum;
	cout<<pivot<<endl;
	sort(nums.begin(), nums.end());
	double sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=nums[i];
		if(sum>pivot)
		{
			res=i;
			break;
		}
	}
	return res;
}

int main() 
{  
	vector<double> nums={1,1.2,3.0,0.3,2.2};
	// for(int i=0;i<20;i++)
	// {
	// 	cout<<randomPickNum(nums)<<' ';
	// }
	cout<<randomPickNum(nums)<<' ';
	cout<<randomPickNum(nums)<<' ';
	return 0; 
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
}