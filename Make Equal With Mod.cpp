#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;



void solve(){
    lli n;
    cin>>n;
    vector<int>res(n);
    for(int i=0;i<n;i++) cin>>res[i];
    sort(res.begin(),res.end());
    bool consec = false,one = false;
    for(int i=0;i<n;i++){
        if(res[i] == 1) one = true;
        if(i+1 <n && res[i]+1 == res[i+1]) consec = true;
    }
  
    if(one && consec) cout<<"NO\n";
    else cout<<"YES\n";
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