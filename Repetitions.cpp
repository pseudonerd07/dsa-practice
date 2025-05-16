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
    string s;
    cin>>s;
    int ans = 1;
    int n = s.size();
    int count = 1;
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1]){
            count++;
        }
        else{
            ans = max(ans,count);
            count = 1;
        }
    }
    ans = max(ans,count);
    cout<<ans<<endl;
}

int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}