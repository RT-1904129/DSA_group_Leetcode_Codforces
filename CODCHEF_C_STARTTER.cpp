#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli a,b;
	cin>>a;
	if(a == 1) cout<<0<<"\n";
	else if(a <=4) cout<<1<<"\n";
	else{
		lli k = (a-1)/5;
		lli j = (a-1)%5;
		if(j==0) cout<<k*2;
		else if(j==1 ||j==2 || j==3) cout<<k*2 + 1;
		else if(j==4) cout<<k*2 + 2;
		cout<<"\n";
	}
	 
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