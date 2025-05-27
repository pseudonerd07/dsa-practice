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
int dp[1001][1001];

int fun(int idx1, int idx2, vi& p, vi& q){
    //state-> fun gives the 
    //prune
    //bc
    //lookup
    //calc

    //save and return
}
void solve(){
    int n,m;
    cin>>n>>m;
    vi p(n,0);
    for(auto &x:p){
        cin>>x;
    }
    vi q(m,0);
    for(auto &x:q){
        cin>>x;
    }
    cout<<fun(n-1,m-1,p,q);
}

int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}