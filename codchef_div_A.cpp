#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;



void solve(){
	lli a;
	cin>>a;
	vector<int>arr;
	while(a){
		arr.push_back(a%10);
		a/=10;
	}
	// if(arr.size()==1)
	if(arr.size()==2) cout<<arr[0]<<"\n";
	else cout<< *min_element(arr.begin(),arr.end())<<"\n";
	
	 
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