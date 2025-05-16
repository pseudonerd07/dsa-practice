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
const int N = (int)1e7+1;
int v[N];
void solve(){
    int n,k;
    cin>>n>>k;
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    v[0] = x;
    for(int i = 1; i < n; i++){
        v[i] = ((ll)a*v[i-1] + b)%c;
    }
    // for(int i = 0; i < n; i++)cout<<v[i]<<" ";
    cout<<endl;
    map<int,int> mp;
    ll ans = 0;
    int i = 0, j = 0;
    while(j < n){
        mp[v[j]]++;
        if(j - i + 1 == k){
            // maploop{
            //     cout<<it->first<<" - "<<it->second<<endl;
            // }
            // cout<<mp.begin()->first<<" ***";
            ans ^= mp.begin()->first;
            mp[v[i]]--;
            if(mp[v[i]] == 0){
                mp.erase(v[i]);
            }
            i++;
        }
        j++;
    }
    cout<<ans<<endl;

}

int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}