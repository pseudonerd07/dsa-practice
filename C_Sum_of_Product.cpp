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
    int n;
    cin>>n;
    vi v(n,0);
    for(auto &x : v){
        cin>>x;
    }
    vector<ll> suffix(n,0ll);
    suffix[n-1] = v[n-1];
    for(int i = n-2;i>=0;i--){
        suffix[i] = (ll)suffix[i+1] + v[i];
    }
    // for(auto x:suffix)cout<<x<<" ";
    ll sum = 0ll; 
    for(int i = 0;i < n-1;i++){
        sum = sum + ((ll)v[i] * suffix[i+1]);
    }
    cout<<sum<<endl;

}
int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}
