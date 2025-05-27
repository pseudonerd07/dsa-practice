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

ll f(int X,int Y,vector<vector<char>>& grid, vector<vector<int>>& dp){
    //prune
    if((X < 0) || (Y < 0) || (grid[X][Y] == '*')){
        return 0;
    }
    //bc
    if(X == 0 && Y == 0){
        return 1;
    }
    //lookup
    if(dp[X][Y] != -1)return dp[X][Y];
    //calc
    ll up = 0,left = 0;
    up = f(X-1,Y,grid,dp);
    left = f(X,Y-1,grid,dp);
    //save and return
    return dp[X][Y] =  (left + up)%mod;

}
void solve(){
    int n;
    cin>>n;
    vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
    vector<vector<char>> grid(n,vector<char> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>grid[i][j];
        }
    }
    cout<<f(n-1,n-1,grid,dp);

    

    
}

int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}