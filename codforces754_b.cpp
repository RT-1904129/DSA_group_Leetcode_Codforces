
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
	int maxi= arr[0],count=0;
	for(int i=0;i<a;i++){
		if(maxi > arr[i]){
			count++;
			if(i+1 < a) maxi = arr[i+1];
		}
		else maxi = max(maxi,arr[i]);
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