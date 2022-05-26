#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli a,b,count=0;
	cin>>a;
	vector<int>arr(a),arr2(a);
	for(int i=0;i<a;i++){
		cin>>arr[i];
	}
	for(int i=0;i<a;i++){
		cin>>arr2[i];
	}
	unordered_map<lli,lli>arr1;
	for(int i=0;i<a;i++){
		lli k = arr2[i]^arr[i];
		arr1[k]++;
	}
	for(auto itr = arr1.begin();itr!= arr1.end();itr++){
		lli n = itr->second;
		if(itr->second >1) count+=(n*(n-1)/2);
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