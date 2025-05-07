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

int fib(int n){
    if(n == 0 || n == 1)return n;
    return fib(n - 1) + fib(n - 2);
}
int fib_dp(int n,vector<int>& dp){
    if(n == 0 || n == 1)return n;
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = fib_dp(n - 1,dp) + fib_dp(n - 2,dp);
}

void solve(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    // cout<<fib(n);
    cout<<fib_dp(n,dp);
}
int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}
