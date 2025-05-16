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
    int n,k;cin>>n>>k;
    vi v(n,-1);
    for(auto &x:v)cin>>x;
    int i = 0, j = 0;
    map<int,int> mp;
    set<pair<int,int>> st;
    while(j < n){
        int e = -v[j];
        mp[e]++;
        st.erase({mp[e] - 1, e});
        st.insert({mp[e], e});

        if(j - i + 1 == k){
            int mode = -(st.rbegin()->second);
            cout<<mode<<" ";
            int e = -v[i];
            st.erase({mp[e], e});
            mp[e]--;
            st.insert({mp[e], e});
            i++;
        }
        j++;
    }
    cout<<endl;
}

int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}