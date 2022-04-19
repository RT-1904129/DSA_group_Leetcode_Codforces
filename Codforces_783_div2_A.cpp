#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    lli n,m;
    cin>>n>>m;
    if(n==1){
        int b = m-1;
        if(b>1) cout<<-1;
        else cout<<b;
        cout<<"\n";
        return;
    }
    if(m==1){
        int b = n-1;
        if(b>1) cout<<-1;
        else cout<<b;
        cout<<"\n";
        return;
    }
    int h = min(n,m);
    int res = (h-1)*2;
    int k = max(n,m) - h;
    res = res + (k/2)*4 + (k%2);
    cout<<res<<"\n";
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