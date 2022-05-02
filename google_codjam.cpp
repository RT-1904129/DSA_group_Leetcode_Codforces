#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

	void solve(){
    lli n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    deque<int>arr1(arr.begin(),arr.end());
    int prev= INT_MIN,count=0;
    while(!arr1.empty()){
    	if(arr1.front() <arr1.back()){
    		if(prev <= arr1.front()){
    			count++;
    			prev = arr1.front();
    		}
    		arr1.pop_front();
    	}
    	else{
    		if(prev <= arr1.back()){
    			count++;
    			prev = arr1.back();
    		}
    		arr1.pop_back();
    	}
    }
    // Case #1:
    cout<<count<<"\n";
}



int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m=1,t;
    cin>>t;
    string str;
    while(t--){
    	cout<<"Case #"<<m<<": ";
    	m++;
        solve();
    }
    return 0;
}