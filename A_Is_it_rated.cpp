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
    int a,b;cin>>a>>b;
    if(b == 1){
        if(a >= 1600 && a <= 2999){
            yn;
        }
        else{
            nn;
        }
    }
    else{
        if(a >= 1200 && a <= 2399){
            yn;
        }
        else{
            nn;
        }

    }
}
int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}
