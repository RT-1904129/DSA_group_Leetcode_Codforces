#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

lli combination(lli k){
    lli result=1;
    for(int i=1;i<=k;i++){
        result*=i;
        result%=998244353;
    }
    return result;
}

void solve(){
    lli n ;
    cin>>n;
    if(n%2) cout<<0<<"\n";
    else {
        lli k = combination(n/2);
        lli h = combination(n/2)* combination(n/2);
        cout<< h%998244353 <<"\n";
    }
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