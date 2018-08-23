<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
	int offset,n,len1,len2;
	while(cin>>offset>>n>>len1>>len2)
	{
		int start1,end1,start2,end2;
		if(offset<=len1 && offset+n<=len1)
		{
			start1 = offset;
			end1 = offset+n;
			start2 = 0; end2 = 0;
			
		}
		else if(offset<=len1 && offset+n>len1)
		{
			start1 = offset;
			end1 = len1;
			start2 = 0;
			end2 = (offset+n-len1)<=(len1+len2)?(offset+n-len1):(len1+len2);

		}
		else if(offset>len1 && offset+n>len1)
		{
			start1 = len1;
			end1 = len1;
			start2 = offset-len1;
			end2 = (offset+n-len1)<=(len1+len2)?(offset+n-len1):(len1+len2);
		}
		cout<<start1<<end1<<start2<<end2;

	}
	return 0;
=======
#include <iostream>
using namespace std;

int main()
{
	int offset,n,len1,len2;
	while(cin>>offset>>n>>len1>>len2)
	{
		int start1,end1,start2,end2;
		if(offset<=len1 && offset+n<=len1)
		{
			start1 = offset;
			end1 = offset+n;
			start2 = 0; end2 = 0;
			
		}
		else if(offset<=len1 && offset+n>len1)
		{
			start1 = offset;
			end1 = len1;
			start2 = 0;
			end2 = (offset+n-len1)<=(len1+len2)?(offset+n-len1):(len1+len2);

		}
		else if(offset>len1 && offset+n>len1)
		{
			start1 = len1;
			end1 = len1;
			start2 = offset-len1;
			end2 = (offset+n-len1)<=(len1+len2)?(offset+n-len1):(len1+len2);
		}
		cout<<start1<<end1<<start2<<end2;

	}
	return 0;
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
}