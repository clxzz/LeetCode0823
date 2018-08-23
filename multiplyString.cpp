<<<<<<< HEAD
#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <string>
using namespace std;

    vector<int> multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        string res;
        vector<int> multi (n1 + n2, 0);
        for(int i = 0;i<n1;i++)
        {
            for (int j=0;j<n2;j++)
            {
                multi[i+j] += (num1[n1-1-i]-'0')*(num2[n1-1-j]-'0');
            }
        }
        int n = multi.size();
        for(int i = 0;i<n;i++)
        {
            int carry = 0;
            int sum=multi[i]+carry;
            multi[i] = sum%10;
            carry = sum/10;
        }
        return multi;
    }

    int main()
    {
        string num1 = "123";
        string num2 = "456";
        vector<int> res = multiply(num1, num2);
        int n = res.size();
        for(int i=0;i<n-1;i++)
            cout<<res[i]<<endl;
=======
#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <string>
using namespace std;

    vector<int> multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        string res;
        vector<int> multi (n1 + n2, 0);
        for(int i = 0;i<n1;i++)
        {
            for (int j=0;j<n2;j++)
            {
                multi[i+j] += (num1[n1-1-i]-'0')*(num2[n1-1-j]-'0');
            }
        }
        int n = multi.size();
        for(int i = 0;i<n;i++)
        {
            int carry = 0;
            int sum=multi[i]+carry;
            multi[i] = sum%10;
            carry = sum/10;
        }
        return multi;
    }

    int main()
    {
        string num1 = "123";
        string num2 = "456";
        vector<int> res = multiply(num1, num2);
        int n = res.size();
        for(int i=0;i<n-1;i++)
            cout<<res[i]<<endl;
>>>>>>> d2fe550792cde210ebdfcd632b4e714bc7ffad29
    }