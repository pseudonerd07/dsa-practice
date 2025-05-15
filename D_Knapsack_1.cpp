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


ll solve(int idx, int wt, vi& weight, vi& value, vector<vector<ll>>& dp){

    if(idx == 0){
        if(weight[0] <= wt)return value[idx] + 0LL;
        return 0LL;
    }
    if(dp[idx][wt] != -1)return dp[idx][wt];
    ll not_taken = 0LL + solve(idx-1,wt,weight,value, dp);
    ll taken = 0LL;
    if(weight[idx] <= wt){
        
        taken += value[idx] + solve(idx-1,wt-weight[idx],weight,value, dp);
    }
    return dp[idx][wt] = max(not_taken,taken);
}

int main() {
    int n;
    cin>>n;
    int w;
    cin>>w;
    vi weight(n),value(n);
    vector<vector<ll>> dp(n,vector<ll> (w+1,0));
    for(int i = 0; i < n; i++){
        cin>>weight[i]>>value[i];
    }
    for(int max_wt = weight[0]; max_wt <= w; max_wt++){
        dp[0][max_wt] = value[0];
    }
    for(int idx = 1; idx < n; idx++){
        for(int max_wt = 1; max_wt < w+1; max_wt++){
            ll not_taken = dp[idx - 1][max_wt];
            ll taken = 0;
            if(weight[idx] <= max_wt){
                taken = value[idx] + dp[idx - 1][max_wt - weight[idx]];
            }
            dp[idx][max_wt] = max(taken,not_taken);

        }
    }
    // cout<<solve(n-1,w,weight,value,dp);
    cout<<dp[n-1][w]<<endl;
    return 0;
}
