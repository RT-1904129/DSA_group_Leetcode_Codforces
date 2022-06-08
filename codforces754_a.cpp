#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli n,b,sum=0;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		sum+=arr[i];
	}
	for(int i=0;i<n;i++){
		lli k =(sum-arr[i])/(n-1);
		if(k == arr[i] && (((sum-arr[i])%(n-1)) == 0 )){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
}





int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m=1,t;
    cin>>t;
    string str1,str2;
    
    while(t--){
    	// cout<<"Case #"<<m<<": ";
    	solve();
    	 m++;
    }
    return 0;
}