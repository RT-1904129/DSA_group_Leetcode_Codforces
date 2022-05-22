#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;



void solve(){
	lli n,m,count=0,cou=0;
	cin>>n>>m;
	vector<int>arr(n);
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		count+= arr[i];
	}
	lli a,b,c;
	lli flag =1,h;
	map<lli,lli>res;
	while(cin>>a){
		if(a== 1){
			cin>>b>>c;
			if(flag){
				count+=(c-arr[b-1]);
				arr[b-1]=c;
				cout<<count<<"\n";
			}
			else{
				if(res.find(b-1)!= res.end()){
					count+=(c-res[b-1]);
				}
				else{
					count+=(c-h);
				}
				res[b-1] = c;
				cout<<count<<"\n";
			}
		}
		else {
			cin>>b;
			if(flag){
				flag=0;
			}
			res.clear();
			count = b*n;
			h = b;
			cout<< count<<"\n";
		}
	}
	
}



int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m=1,t;
    // cin>>t;
    t=1;
    string str;
    while(t--){
    	// cout<<"Case #"<<m<<": ";
    	m++;
        solve();
    }
    return 0;
}