<<<<<<< HEAD
#include <string>
#include <iostream>
using namespace std;

int main()
{
        string s ="aaaa"; 
        string res;
        int n = s.size();
        int idx;
        for(int i = 1;i<n;i++)
        {
            if(s[i] == s[0])
            {
                idx = i;
                break;
            }
        }
        res = s.substr(0,idx);
        cout<<res<<endl;
    
    return 0;
=======
#include <string>
#include <iostream>
using namespace std;

int main()
{
        string s ="aaaa"; 
        string res;
        int n = s.size();
        int idx;
        for(int i = 1;i<n;i++)
        {
            if(s[i] == s[0])
            {
                idx = i;
                break;
            }
        }
        res = s.substr(0,idx);
        cout<<res<<endl;
    
    return 0;
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
}