#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
	lli a,b,c,k,sq=0,res=0;
	cin>>a>>k;
	vector<int>arr(a);
	for(int i=0;i<a;i++){
		cin>>arr[i];
		res+=arr[i];
		sq+=(arr[i]*arr[i]);
	}
	// res = res*res;
	if(res ==0 && sq == 0){
		cout<<1;
		cout<<"\n";
		return;
	}
	else if(res ==0){
		 cout<<"IMPOSSIBLE";
		 cout<<"\n";
		 return;
	}
	lli h = (sq - res*res)/(2*res);
	if((sq - res*res)%(2*res)) cout<<"IMPOSSIBLE";
	else cout<<h;
	cout<<"\n";
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