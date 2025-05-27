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

void solve(){
    int n,q;
    cin>>n>>q;
    vi v(n,0);
    for(auto &x:v)cin>>x;
    vll prefix(n,v[0]);
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] + v[i];
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        if(l == 1){
            cout<<prefix[r-1];
        }
        else{
            cout<<prefix[r-1] - prefix[l-1-1];
        }
        cout<<endl;
    }
}

int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}