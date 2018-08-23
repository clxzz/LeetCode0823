<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    str = "1111100";
    int n = str.size();
    int array[n];
    int num = 0;
    for(int i = 0; i<n; i++)
    	array[i] = 0;
    for (int i = 0; i<n; i++)
    {
    	if(str[i] == '1')
    		num++;
    	if(str[i] == '0')
    		num--;
    	array[i] = num;
    }
    for(int i = 0; i<n; i++)
    	cout<<array[i]<<' ';
    return 0;
}
=======
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    str = "1111100";
    int n = str.size();
    int array[n];
    int num = 0;
    for(int i = 0; i<n; i++)
    	array[i] = 0;
    for (int i = 0; i<n; i++)
    {
    	if(str[i] == '1')
    		num++;
    	if(str[i] == '0')
    		num--;
    	array[i] = num;
    }
    for(int i = 0; i<n; i++)
    	cout<<array[i]<<' ';
    return 0;
}
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
