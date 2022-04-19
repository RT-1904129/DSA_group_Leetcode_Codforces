#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;
 
 
void solve(){
    lli n,m;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    lli check,res=1e18,count;
    for(int i=0;i< n;i++){
        check = 0,count=0;
        for(int j= i-1;j>=0;j--){
            count+= (check/a[j]) +1;
            check = (check/a[j] +1)*a[j];
        }
        check = 0;
        for(int j = i+1;j < n;j++){
            count+= (check/a[j]) +1;
            check = (check/a[j] +1)*a[j];
        }
        res = min(res,count);
    }
    cout<<res<<"\n";
}
 
 
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    lli n,m,t;
    string str;
    solve();
    return 0;
}