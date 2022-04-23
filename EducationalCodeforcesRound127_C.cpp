#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

void solve(){
    string str;
    bool check= false;
    cin>>str;
    int n = str.length();
    int a=0,b=0;
    for(int i=0;i<n;i++){
       if(str[i] == 'a') {
    	if(b == 1){
    		check = true;
    		break;
    	}
    	else {
    		a++;
    		b=0;	
    	}
       }
       else{
    	if(a == 1){
    		check = true;
    		break;
    	}
    	else {
    		b++;
    		a=0;	
    	}
       }
    }
    if((a==1 && b==0)||(a==0 && b==1)) check= true;
    if(check) cout<<"NO\n";
    else cout<<"YES\n";
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