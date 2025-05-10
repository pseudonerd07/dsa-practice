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

bool check(unordered_map<int,int>& mp,int m){
    for(int i = 1; i <= m; i++){
        if(mp.find(i) == mp.end()){
            return true;
        }
    }
    return false;
}

void p(unordered_map<int,int>& mp){
    for(auto it = mp.begin() ;it!=mp.end(); it++){
    cout<<it->first<<" - "<<it->second;
    cout<<endl;
    }   
    cout<<":"<<mp.size()<<endl;
    cout<<"---------------\n";
}
void solve(){
    int n,m;
    cin>>n>>m;
    vi v(n,0);
    int f = 0;
    unordered_map<int,int> mp;
    for(auto &x:v)cin>>x;
    for(auto x:v){
        mp[x]++;
    }
    if(check(mp,m)){
        cout<<0<<endl;
        f=1;
        return;
    }
    // p(mp);
    int i;
    for(i = n - 1; i >= 0; i--){
        mp[v[i]]--;
        if(mp[v[i]] == 0)mp.erase(v[i]);
        // p(mp);
        if(check(mp,m)){
            // cout<<"here\n";
            cout<<n-i<<endl;
            f=1;
            break;
        }
        
    }
    if(f == 0)cout<<n<<endl;
    
}
int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}
