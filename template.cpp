#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

int count1=0;
string str2;

bool test(string str){
	unordered_map<char,int>arr;
	for(int i=0;i<str.length();i++){
		if(arr.find(str[i])!= arr.end()) {
			if(i - arr[str[i]] > 1) return false;
		}
		arr[str[i]]=i;
	}
	return true;
}

void dfs(vector<string>&str1,string str,vector<bool>&visited,lli k){
	if(str.length()== k){
		if(test(str)) {
			count1=1;
			str2 = str;
			}
		return;		
	}
	if(count1==1) return;
	for(int i= 0;i<str1.size();i++){
		if(!visited[i]){
			visited[i]= true;
			// str+=str1[i];
			dfs(str1,str+ str1[i],visited,k);
			if(count1 == 1) return;
			visited[i]= false;
		}
	}
}

void solve(){
	lli a,b,c,res=0;
	cin>>b;
	lli k=0;
	count1=0;
	vector<string>str1(b);
	for(int i=0;i<b;i++) {
		cin>>str1[i];
		k+=str1[i].length();
	}
	vector<bool>visited(b,false);
	string str;
	dfs(str1,str,visited,k);
	if(count1) cout<<str2;
	else cout<<"IMPOSSIBLE";
	cout<<"\n";
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