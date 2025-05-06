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

void solve(){
    int n,x;
    cin>>n>>x;
    vi v(n,0);
    for(auto &x:v)cin>>x;
    vi dp(x+1,1e9);
    //dp[k] - state -> the min number of coins needed to form a sum of k
    dp[0] = 0;
    for(int i = 1;i <= x;i++){
        
        for(int j = 0;j < n;j++){
            if(v[j] <= i){
                dp[i] = min(dp[i] , dp[i-v[j]] + 1);
            }
        }
    }
    dp[x] == 1e9 ? cout<<-1 : cout<<dp[x];
    // cout<<dp[x];
}
int main() {
    fast_io;
        solve();
 
    return 0;
}

