#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*
    已知数组的大小,使用动态数组
    */
    int i = 0;
    int num;
 
    /*
    数组大小未知时
    */
    vector<int>b;
    while (cin >> num)
    {
        if (cin.get() == '\n')   //遇到回车，终止
            break;
        b.push_back(num);
 
    }
    cout << "程序终止了" << endl;
    system("pause");
    return 0;
}
