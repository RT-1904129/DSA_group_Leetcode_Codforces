#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli a,b;
	cin>>a>>b;
	int count=0;
	while(true){
		if(a%3 == 0) break;
		if(b%3 == 0) break;
		if(a>b){
			a = abs(b-a);
		}
		else b = abs(a-b);
		count++;
	}
	cout<<count<<"\n";
	 
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