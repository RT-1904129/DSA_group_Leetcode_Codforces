#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
	double i=0,n,j,ans;
	cin>>n;
	j = n;
	while(i<=j){
		double mid = i+ (j-i)/2;
		if(mid*mid >n){
			ans = mid;
			j = mid - 0.000001;
		}
		else {
			
			i = mid + 0.000001;
		}
		
	}
	cout<<ans;
}



int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m=1,t;
    cin>>t;
    string str;
    while(t--){
    	// cout<<"Case #"<<m<<": ";
    	// m++;
        solve();
    }
    return 0;
}