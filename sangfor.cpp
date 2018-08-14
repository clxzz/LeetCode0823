//---------------111111

#include <bits/stdc++.h>
using namespace std;
#define cle(x) memset(x, 0, sizeof(x))
const int N = 1e3 + 5;
int dp[N], tmp[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n, k, x;
    while(cin >> n >> k) {
        cle(dp);cle(tmp);
        for(int i = 1; i <= n; i++) dp[i] = 1;
        for(int i = 1; i <= k; i++) {
            cin >> x;
            dp[x] = 0;
            for(int i = 1; i <= n; i++) {
                tmp[i] = max(dp[i - 1], dp[i + 1]);
            }
            for(int i = 1; i <= n; i++) {
                dp[i] = tmp[i];
                tmp[i] = 0;
            }
        }
        int f = 1;
        for(int i = 1; i <= n; i++) 
            if(dp[i]) f = 0;
        f?puts("Yes"):puts("No");
    }
    return 0;
}

//-------------------22222

#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n, m, x;
    while(cin >> n){
        map<int, int> mp;
        vector<int> ans;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(mp[x] == 0) ans.push_back(x);
            mp[x] = 1;
        }
        m = min(10, (int)ans.size());
        cout << m <<endl;
        for(int i = 0; i < m; i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}


//-------------333333

#include <bits/stdc++.h>
using namespace std;
const int N = 150;
#define cle(x) memset(x, 0, sizeof(x))
int a[N], b[N];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n, x;
    while(cin >> n) {
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = i;
        }
        do{
            int sum = 0;
            for(int i = 0; i < n; i++) {
                sum += a[b[i]];
                if(sum == 100) {
                    cout << i + 1 << endl;
                    for(int j = 0; j <= i; j++)
                        cout << b[j] + 1 << endl;
                    return 0;
                }
            }
        }while(next_permutation(b, b + n));
    }
    return 0;
}


//----------------444444

#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
#define ull unsigned long long
const ull val = 133;
string a;
ull base[N], pos[N], ha[N];
void init() {
    base[0] = 1;
    pos[0] = 0;
    for(int i = 1; i <= N; i++)
        base[i] = base[i - 1] * val;
}
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin >> a) {
        int n = a.size();
        init();
        for(int i = 0; i < n; i++)
            pos[i + 1] = pos[i] * val + a[i];
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = n - 1; j > i; j--) {
                int len = j - i + 1;
                if(len % 2) continue;
                if(len <= ans) break;
                if(pos[j + 1] - pos[j + 1 - len / 2] * base[len / 2] 
                        == pos[j + 1 - len / 2] - pos[i] * base[len / 2]) {
                    ans = max(ans, len);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}



//-------------------55555

#include <bits/stdc++.h>
using namespace std;
int a[10], n;
map<int, int> dp;
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin >> n) {
        dp.clear();
        int num = 0, targe = 0;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            targe = targe * 10 + i;
            num = num * 10 + a[i];
        }
        dp[num] = 1;
        queue<int> q;
        q.push(num);
        while(!q.empty()){
            int x = q.front();
            if(x == targe) break;
            q.pop();
            vector<int> v(n, 0);
            int ip = n - 1;
            int tmp = x;
            while(tmp) {
                v[ip--] = tmp % 10;
                tmp /= 10;
            }
            for(int i = 0; i < n; i++) {
                for(int j = i + 1; j < n; j++) {
                    num = 0;
                    for(int k = 0; k < i; k++) num = num * 10 + v[k];
                    for(int k = j; k >= i; k--) num = num * 10 + v[k];
                    for(int k = j + 1; k < n; k++) num = num * 10 + v[k];
                    if(dp[num] == 0) {
                        q.push(num);
                        dp[num] = dp[x] + 1;
                    }
                }
            }
        }
        cout << dp[targe] - 1 << endl;
    }
    return 0;
}