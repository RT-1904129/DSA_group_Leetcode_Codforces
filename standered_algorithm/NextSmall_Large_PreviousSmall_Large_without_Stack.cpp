#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef long int li;

int nextSmall_Larger_previoussmall_Large_without_stack(vector<int>num){
	vector<int>prevoius_smaller(n),next_smaller_or_equal(n);
	vector<int>prevoius_larger(n),next_larger_or_equal(n);
	for(int i=0;i<n;i++){
		int j = i-1;
		while(j>=0 && num[j]>=num[i]){
			j = prevoius_smallar[j];
		}
		prevoius_smallar[i]=j;
		
		int j= i-1;
		while(j>=0 && num[j]<=num[i]){
			j= prevoius_larger[j];
		}
		previous_larger[i]= j;
	}
	for(int i= n-1;i>=0;i--){
		int j= i+1;
		while(j<n && nums[j]> nums[i]){
			j = next_smaller_or_equal[j];
		}
		next_smaller_or_equal[i] = j;
		
		int j = i+1;
		while(j<n && nums[j]< nums[i]){
			j = next_larger_or_equal[j];
		}
		next_larger_or_equal[i]=j;
	}
	long long int min_sum=0;
	long long int max_sum=0;
	for(int i=0;i<n;i++){
		max_sum+=(((long long int)nums[i])*(next_larger_or_equal[i]-i)*(i-previous_larger[i]));
		min_sum+=(((long long int)nums[i])*(next_smallest_or_equal[i]-i)*(i-previous_smallest[i]));
	}
	cout<< max_sum;
	cout<<min_sum;
	
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