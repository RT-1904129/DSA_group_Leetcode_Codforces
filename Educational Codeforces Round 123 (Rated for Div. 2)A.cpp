#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    string str;
    cin>>str;
    unordered_map<char,int>arr;
    for(int i=0;i<6;i++){
        if(str[i] == 'r' || str[i] == 'g' || str[i] == 'b') arr[str[i]]=1;
        else{
            if(arr[str[i] + 32]) continue;
            else {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}



int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m,t;
    cin>>t;
    string str;
    while(t--){
        solve();
    }
    return 0;
}