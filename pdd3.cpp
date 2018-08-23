<<<<<<< HEAD
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n=5, m=3;
    vector<int> h = {2,2,2,2,3};
    vector<int> w = {3,3,2};

    sort(h.begin(),h.end());
    sort(w.begin(),w.end());
    int res = 0;
        for(int i = m-1;i>=0;i--)
        {
            for(int j = n-1;j>=0;j--)
            {
                if(w[i]>=h[j])
                {
                    res++;
                    n=j;
                    break;
                }
            }
        }
        cout<<res<<endl;
    return 0;
=======
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n=5, m=3;
    vector<int> h = {2,2,2,2,3};
    vector<int> w = {3,3,2};

    sort(h.begin(),h.end());
    sort(w.begin(),w.end());
    int res = 0;
        for(int i = m-1;i>=0;i--)
        {
            for(int j = n-1;j>=0;j--)
            {
                if(w[i]>=h[j])
                {
                    res++;
                    n=j;
                    break;
                }
            }
        }
        cout<<res<<endl;
    return 0;
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
}