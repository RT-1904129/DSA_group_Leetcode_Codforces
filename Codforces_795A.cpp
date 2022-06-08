#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli a,b;
	cin>>a;
	lli odd=0,even=0;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b%2) odd++;
		else even++;
	}
	cout<<min(odd,even)<<"\n";
	
	 
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