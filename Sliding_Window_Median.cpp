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
    int n,k;
    cin>>n>>k;
    vi v(n,0);
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    v[0] = x;
    for(int i = 1; i < n; i++){
        v[i] = (a*v[i-1] + b)%c;
    }
    for(auto x:v)cout<<x<<" ";
    // int i = 0,j = 0;
    // vi temp;
    // int sum = 0;
    // int ans = 0;
    // int mid = (k - 1)/2;
    // while(j < n){
    //     sum = (sum + v[j])%mod;
    //     if(j - i + 1 == k){
    //         vi temp_sorted = temp;
    //         sort(temp_sorted.begin(), temp_sorted.end());
    //         cout<<temp_sorted[mid]<<" ";
    //         temp.erase(temp.begin());
    //         i++;
    //     }
    //     j++;

    // }
}

int main() {
    fast_io;
    testcases1 {
        solve();
    }
    return 0;
}