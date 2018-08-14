#include <string>
#include <iostream>
#include <vector>
using namespace std;

bool duplicate(string s, int start1, int start2)
{
    bool res = true;
    for (int i = start1; i < start2;i++)
    {
        //int length=start2-start1;
        if(s[start1+i] != s[start2+i]){
            res = false;
            break;
        }
    }
    return res;

}

string findDuplicateString(string s)
{
    string res;
        int n = s.size();
        vector<int> idx;
        for(int i = 1;i<n;i++)
        {
            if(s[i] == s[0])
            {
                idx.push_back(i);
            }
        }
        res = s.substr(0,idx);
        return res;
}

int main()
{
        string s1 ="aabbaabb";
        string s2 ="aaa";
        string s3 ="abcabc"; 
        string s4 = "abcabcdabcabcd";
        string res1 = findDuplicateString(s1);
        string res2 = findDuplicateString(s2);
        string res3 = findDuplicateString(s3);
        string res4 = findDuplicateString(s4);
        cout<<res1<<' '<<res2<<' '<<res3<<' '<<res4<<endl;
}