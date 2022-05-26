#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli a,b,c,sum=0,sum1=0;
	cin>>a>>b>>c;
	vector<int>arr(a);
	for(int i=0;i<a;i++) {
		cin>>arr[i];
		sum+=arr[i];
		if(arr[i] > c) sum1+=(arr[i] - c);
	}
	sum1+=b;
	if(sum > sum1) cout<<"COUPON\n";
	else cout<<"NO COUPON\n";
	
	
	
	 
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