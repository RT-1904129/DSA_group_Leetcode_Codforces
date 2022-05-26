#include<bits/stdc++.h>
using namespace std;

int f(int a[],int b[],int n)
{
    vector<int> c(32,0);
    int ans=0;
    
    for(int i=0;i<32;i++)
    {
        int j;
        for(j=0;j<n;j++)
        {
            if((b[j] & (1<<i))==0)
            break;
        }
        
        if(j==n)
        c[i]=1;
    }
    
    for(int i=0;i<32;i++)
    ans+=c[i]*pow(2,i);
    
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    mp[b[i]]++;
    
    for(int i=0;i<n;i++)
    {
        int x= (a[i]|ans);
        
        if(mp.find(x)==mp.end())
        return -1;
        
        mp[x]--;
        
        if(mp[x]==0)
        mp.erase(x);
    }
    
    return ans;
}

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    
	    cout<<f(a,b,n)<<endl;
	}
	
	return 0;
}