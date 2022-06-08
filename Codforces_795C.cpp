#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;




void solve(){
	lli a,k,n;
	cin>>a;
	k = 2*a;
	string str;
	vector<int>arr(26);
	for(int i=0;i<=k;i++){
		cin>>str;
		n = str.length();
		for(int j=0;j<n;j++){
			arr[str[j]-'a']++;
		}
	}
	for(int i=0;i<26;i++){
		if(arr[i]%2){
			char  j = 'a' + i;
			cout<<j<<"\n";
			return;
		}
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