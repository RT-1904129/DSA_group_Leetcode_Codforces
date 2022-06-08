#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli a,b,odd=0,even=0;
	cin>>a;
	vector<int>arr;
	for(int i=0;i<a;i++){
		cin>>b;
		if(b%2) odd++;
		else {
			even++;
			arr.push_back(b);
			}
	}
	if(odd) cout<<even<<"\n";
	else{
		int count= INT_MAX;
		sort(arr.begin(),arr.end());
		int n = arr.size();
		for(int i=0;i<n;i++){
			int check=0,l = arr[i];
			while(l%2==0){
				check++;
				l/=2;
				if(check> count) break;
			}
			count = min(check,count);
		}
		cout<<count + n-1<<"\n";
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