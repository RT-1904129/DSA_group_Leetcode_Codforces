#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    lli n,m,result=0,count1=0;
    cin>>n;
    string str;
    cin>>str;
    // vector<string>arr;
    for(int i=0;i<n-1;i++){
        if(i==0 && str[i] == '1')  {count1++; continue;}
        if(str[i] == '1') count1++;
        else count1=0;
        if(str[i]=='0' && str[i+1] == '0') result+=2;
        else if(str[i]=='1' && str[i+1]=='0') {
            if(count1 == 1) result+=1;
        }
    }
    // int check=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<m-1;j++){
    //         check =(arr[i][j]-'0' + arr[i+1][j] - '0' + arr[i][j+1] - '0' + arr[i+1][j+1] - '0');
    //         if(check == 3) {
    //             cout<<"NO\n";
    //             return;
    //         }
    //     }
    // }
    // cout<<"YES\n";
    cout<<result<<"\n";
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