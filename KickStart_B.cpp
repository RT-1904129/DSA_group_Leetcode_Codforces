#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void subset(int final,int start,int target,vector<int>&output,vector<vector<int>>&arr1){
	if(target == 0){
		arr1.push_back(output);
		return;
	}
	if(arr1.size()==1 || target <0) return;
	for(int i= start;i<=final;i++){
		if((target- i)<0) return;
		output.push_back(i);
		subset(final,i+1,target-i,output,arr1);
		// if(arr1.size()==1 || (target-i) <0) return;
		output.pop_back();
	}
}

void solve(){
	lli x,y,t;
	cin>>t>>x>>y;
	lli to = (t*(t+1))/2;
	if(to%(x+y)){
		cout<<"IMPOSSIBLE\n";
		return;
	}
	lli l = to/(x+y);
	vector<vector<int>>arr1;
	vector<int>arr;
	subset(t,1,l*x,arr,arr1);
	if(arr1.size()==0){
		cout<<"IMPOSSIBLE\n";
		return;
	}
	else{
		cout<<"POSSIBLE\n";
		arr = arr1[0];
		cout<<"testing "<< l*x<<"\n";
		int n = arr1[0].size();
		cout<<n<<"\n";
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	 
}



int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m=1,t;
    cin>>t;
    string str1,str2;
    
    while(t--){
    	cout<<"Case #"<<m<<": ";
    	solve();
    	 m++;
    }
    return 0;
}