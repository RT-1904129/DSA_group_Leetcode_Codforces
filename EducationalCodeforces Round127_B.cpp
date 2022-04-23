#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    lli a,b=0;
    cin>>a;
    vector<int>arr(a);
    for(int i=0;i<a;i++) cin>>arr[i];
    vector<int>a1,a2,a3;
    a1.push_back(arr[0]);
    a2.push_back(arr[0]-1);
    a3.push_back(arr[0]+1);
	for(int i=1;i<a;i++){
		int curr = arr[i];
		if(a1.back()+1 == curr) a1.push_back(curr);
		else if(a1.back()+1 == curr+1) a1.push_back(curr+1);
		else if(a1.back()+1 == curr-1) a1.push_back(curr-1);
	
		if(a2.back()+1 == curr) a2.push_back(curr);
		else if(a2.back()+1 == curr+1) a2.push_back(curr+1);
		else if(a2.back()+1 == curr-1) a2.push_back(curr-1);
		if(a3.back()+1 == curr) a3.push_back(curr);
		else if(a3.back()+1 == curr+1) a3.push_back(curr+1);
		else if(a3.back()+1 == curr-1) a3.push_back(curr-1);
	}
	if(a1.size() == a || a2.size() == a ||a3.size() == a  ) cout << "YES\n";
	else cout << "NO\n";
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