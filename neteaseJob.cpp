#include <iostream>
#include <map>
#include <algorithm>
 
using namespace std;
 
int main(){
    int N,M,D,P,A;
    map<int,int> diffiAndPay;//用来表示工作难度和报酬对。
    //首先输入工作难度和报酬对。
    cin>>N>>M;
    for(int i=0;i<N;i++){
        cin>>D>>P;
        diffiAndPay.insert({D,P});
    }
 
    //这里是关键！
    //利用map的性质，key（工作难度）越小越靠前，如果能力大于当前key值，能得到的报酬一定大于等于当前key值所对应的报酬。按照这一思想，将小于等于此key值最大的报酬找到并设置当前key值对应的报酬，再利用map的upper_bound函数，找到能力所能找到的最大工作难度的工作。
    int pay=0;
    for(map<int,int>::iterator ite=diffiAndPay.begin();ite!=diffiAndPay.end();ite++){
        pay=max(pay,ite->second);
        ite->second=pay;
    }
 
    //输出对应最大报酬
    map<int,int>::iterator ite;
    for(int i=0;i<M;i++){
        cin>>A;
        ite=diffiAndPay.upper_bound(A);
        ite--;
        cout<<ite->second<<endl;
    }
 
    return 0;
}