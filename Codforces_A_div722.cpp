#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    lli n,i=0,k=0,j=0;
    cin>>n;
    k=n;
    vector<int>arr(n);
    while(n--) {
        cin>>arr[i];
        i++;
    }
    i=0;
    while(i<k && arr[i] ==i+1) i++;
    j= 0;
    while(j<k && i+1 != arr[j]) j++;
    // cout<<i<<" "<<j;
    reverse(arr.begin()+i,arr.begin()+j+1);
    for(int i=0;i<k;i++) cout<<arr[i]<<" ";
    cout<<"\n";
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