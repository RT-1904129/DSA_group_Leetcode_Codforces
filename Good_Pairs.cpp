#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    lli n,m;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // lli maxi_index,mini_index;
    int max_index = max_element(arr.begin(),arr.end())- arr.begin();
    int mini_index = min_element(arr.begin(),arr.end()) - arr.begin();
    // for(int i=0;i<n;i++){
    //     if(max < arr[i]) {
    //         maxi_index = i;
    //         max = arr[i];
    //     }
    //     if(mini >arr[i]) {
    //         mini_index =i;
    //          mini = arr[i];
    //     }
    // }
    cout<<mini_index +1<<" "<< max_index+1<<"\n";
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