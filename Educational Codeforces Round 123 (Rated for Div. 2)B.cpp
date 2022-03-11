#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    lli n;
    cin>>n;
    vector<int>arr(n);
    for(int i=1;i<=n;i++) arr[i-1] = n-i+1;
    int r = 0;
    do{
        int test=0;
        for(int i=1;i<n-1;i++){
            if(arr[i]+arr[i-1] == arr[i+1]) {
                test =1;
                break;
            }
        }
        if(!test) {
            for(int i=0;i<n;i++) cout<<arr[i]<<" ";
            cout<<"\n";
            r++;
        }
        if(r == n) break;
    }while(prev_permutation(arr.begin(),arr.end()));
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