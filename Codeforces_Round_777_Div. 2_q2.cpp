#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    lli n,m;
    cin>>n>>m;
    string str;
    vector<string>arr;
    for(int i=0;i<n;i++){
        cin>>str;
        arr.push_back(str);
    }
    int check=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            check =(arr[i][j]-'0' + arr[i+1][j] - '0' + arr[i][j+1] - '0' + arr[i+1][j+1] - '0');
            if(check == 3) {
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