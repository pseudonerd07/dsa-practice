#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    string s;
    int count=0;
    cin>>s;
    if(s.size() == 1 && islower(s[0])){
        cout<<char(toupper(s[0]))<<endl;
        
    }
    else{
        for(auto x:s){
            if(isupper(x)){
                ++count;
            }
        }
        if(count == s.size()){
            for(auto x:s){
                cout<<char(tolower(x));
            }
            cout<<endl;
        }
        else if(islower(s[0]) && (count + 1 == s.size())){
            cout<<char(toupper(s[0]));
            for(int i=1;i<s.size();i++)cout<<char(tolower(s[i]));


        }
        else{
            cout<<s<<endl;
        }
    }
    


}