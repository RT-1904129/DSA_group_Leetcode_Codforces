#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;



int solve(){
	int n;
	cin>>n;
	string str;
	bool sp=false,up=false,lo = false,dg= false;
	cin>>str;
	for(int i=0;i<n;i++){
		if(isdigit(str[i])) dg= true;
		else if(isalpha(str[i])) {
			if(isupper(str[i])) up = true;
			else lo = true;
		}
		else sp = true;
	}
	if(!sp) str+='@';
	if(!up) str+='A';
	if(!lo) str+='a';
	if(!dg) str+='1';
	while(str.length()<7){
		str+='A';
	}
	cout<<str<<"\n";
	 
}



int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m=1,t;
    cin>>t;
    string str1,str2;
    
    while(t--){
    	cout<<"Case #"<<m<<": ";
    	solve();
    	 m++;
    }
    return 0;
}