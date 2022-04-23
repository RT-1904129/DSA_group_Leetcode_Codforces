#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    lli a,b;
    cin>>a>>b;
    vector<int>arr(a);
    for(int i=0;i<a;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    vector<int>prefix(a);
    prefix[0]= arr[0];
    for(int i=1;i<a;i++) prefix[i]= prefix[i-1]+ arr[i];
    int j=1,result=0;
    while(j){
    	int count=0;
    	for(int i=0;i<a;i++){
    		// cout<< prefix[i]<< " test\n";
    		if(prefix[i] >b) break;
    		else count++;
    		prefix[i]+=(i+1);
    	}
    	// cout<<"\n";
    	// cout<<count<<"checking\n";
    	result+=count;
    	if(count==0) j=0;
    }
    cout<< result<<"\n";
}



int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m,t;
    cin>>t;
    string str;
    while(t--){
        solve();
    }
    return 0;
}