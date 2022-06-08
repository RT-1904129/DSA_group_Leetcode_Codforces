#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
	


void solve(){
	lli n,b;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	vector<int>index(n);
	for(int i=0,k=1;i<n;i++,k++) index[i]= k;
	bool test= false;
	if(n==1) test = true;
	if(n>1){
		for(int i=1;i<n;i++){
			if(i>0&& i<n-1 && arr[i-1]!= arr[i] && arr[i]!= arr[i+1]){
				test= true;
				break;		
			}
			else if((i-1 == 0 || i== n-1)&& arr[i]!= arr[i-1]){
				test= true;
				break;
			}
			else if(arr[i]== arr[i-1]){
				swap(index[i],index[i-1]);
			}
		}
	}
	if(test) cout<<-1;
	else {
		for(int i=0;i<n;i++)
		cout<<index[i]<<" ";
		
	}
	cout<<"\n";
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