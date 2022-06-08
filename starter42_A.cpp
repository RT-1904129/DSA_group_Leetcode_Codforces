#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	int n,b,maxi=INT_MIN,mini=INT_MAX;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=1;i<n;i++){
		if(arr[i]> arr[i-1]){
			if(maxi > arr[i]){
				cout<<"NO\n";
				return;
			}
			else {
				maxi = arr[i];
				mini = min(mini,arr[i-1]);
				}
		}
		else if(arr[i] < arr[i-1]){
			if(mini < arr[i]){
				cout<<"NO\n";
				return;
			}
			else {
				mini = arr[i];
				maxi = max(maxi,arr[i-1]);
				}
		}
	}
	cout<<"YES\n";
	 
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