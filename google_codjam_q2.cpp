#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;


void solve(){
    lli n,m,ans=0;
    cin>>n>>m;
    vector<vector<lli>>arr(n,vector<lli>(m));
    for(int i=0;i<n;i++){
    	for(int j=0;j<m;j++) cin>>arr[i][j];
    	sort(arr[i].begin(),arr[i].end());
    	ans+=(arr[i][m-1]-arr[i][0]);
    }
    vector<vector<lli>>dp(n,vector<lli>(2));
    for(int i= n-2;i>=0;i--){
    	dp[i][0] += min(dp[i+1][1] + abs(arr[i][0] - arr[i+1][0]) ,dp[i+1][0] + abs(arr[i][0] - arr[i+1][m-1]) );
    	dp[i][1] += min(dp[i+1][1] + abs(arr[i][m-1] - arr[i+1][0]) ,dp[i+1][0] + abs(arr[i][m-1] - arr[i+1][m-1]) );	
    }
    
    
    cout<<ans + min(dp[0][0]+ arr[0][m-1],dp[0][1]+ arr[0][0])<<"\n";
}



int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m=1,t;
    cin>>t;
    string str;
    while(t--){
    	cout<<"Case #"<<m<<": ";
    	m++;
        solve();
    }
    return 0;
}