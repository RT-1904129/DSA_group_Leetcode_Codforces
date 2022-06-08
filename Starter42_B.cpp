#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli a,b,count=0;
	string str;
	cin>>b;
	cin>>str;
	a = str.length();
	for(int i=0;i<a-1;i++){
		if(str[i]=='1' && str[i+1]=='0') count++;
	}
	
	if(count>1) cout<<count*2-1;
	else if(count==1) cout<<2;
	else cout<<1;
	cout<<"\n";
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