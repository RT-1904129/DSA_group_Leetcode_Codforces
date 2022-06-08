#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli a,b;
	cin>>a;
	vector<int>arr(a);
	for(int i=0;i<a;i++) cin>>arr[i];
	if(a%2) {
		cout<<"NO\n";
		return;
		}
	sort(arr.begin(),arr.end());
	vector<int>res(a);
	for(int i=0,k=0;i<a;i+=2,k++){
		res[i] = arr[k];
	}
	for(int i=1,k = a-1;i<a;i+=2,k--){
		res[i]= arr[k];
	}
	for(int i=1;i<a-1;i++){
		if(res[i-1] < res[i] && res[i]> res[i+1]) continue;
		else if(res[i-1] > res[i] && res[i]< res[i+1]) continue;
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	for(int i=0;i<a;i++){
		cout<<res[i]<<" ";
	}
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