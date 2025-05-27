#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define mod 1000000007
#define vi vector<int>
#define vll vector<ll>
#define cn int n;cin>>n
#define printv for(auto x:v)cout<<x<<" ";cout<<endl;
#define loop for(int i=0;i<n;i++)
#define testcases   int t;cin>>t;while(t--)
#define testcases1   int t;t=1;while(t--)
#define maploop for(auto it=mp.begin();it!=mp.end();it++)
#define yn cout<<"Yes\n"
#define nn cout<<"No\n"
#define pb push_back
int dp[1005][100005];
// int fun(int idx,int x,vi& h,vi& s){
//     //state-> maximum amount of pages till idx with price(budget) x

//     //prune
//     if(x < 0)return 0;
//     //bc
//     if(idx <= 0){
//         if(h[0] <= x)return s[0];
//         return 0;
//     }
//     //lookup
//     if(dp[idx][x] != -1)return dp[idx][x];
//     //calculate
//     //take
//     int take = INT_MIN;
//     if(x-h[idx] >=0){
//         take = fun(idx-1,x - h[idx],h,s) + s[idx];
//     } 
//     //not_take
//     int not_take = fun(idx - 1,x,h,s);
//     //save and return
//     return dp[idx][x] = max(take,not_take);
// }
void solve(){
    int n,x;
    cin>>n>>x;
    vi h(n,0);
    vi s(n,0);
    for(auto &y:h)cin>>y;
    for(auto &y:s)cin>>y;
    memset(dp,-1,sizeof(dp));
    memset(dp,0,sizeof(dp));
    for(int i = 0; i <= n; i++){
        dp[i][0] = 0;
    }
    for(int i = 0; i <= x; i++){
        dp[0][i] = 0;
    }
    for(int idx = 1; idx <= n; idx++){
        for(int budget = 1; budget <= x; budget++){
            int taken = INT_MIN;
            if(budget - h[idx - 1] >= 0)taken = dp[idx-1][budget - h[idx - 1]] + s[idx - 1];
            int not_taken = dp[idx-1][budget];
            dp[idx][budget] = max(taken,not_taken);
        }
    }
    // int ans = fun(n-1,x,h,s);
    // cout<<ans<<endl;
    cout<<dp[n][x];
}

int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}