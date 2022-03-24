#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;



void solve(){
    lli n,k;
    cin>>n>>k;
    vector<int>res(n);
    for(int i=0;i<n;i++) cin>>res[i];
    unordered_map<int,int>arr;
    for(int i=0;i<n;i++) {
       arr[res[i]]++;
    }
    int resi=0;
    for(int i=0;i<n;i++) {
       if(arr[res[i]+k]) {
           resi=1; 
           break;
       }
    }
  
    if(resi) cout<<"YES\n";
    else cout<<"NO\n";
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