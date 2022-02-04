class Solution {
public:
    int countPairs(vector<int>& del) {
        int n=del.size();
        unordered_map<int,int> mp;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=21;j++){
                int pow=1<<j;
                if(mp.find(pow-del[i])!=mp.end())   cnt+=mp[pow-del[i]];
                cnt=cnt%1000000007;
            }
            mp[del[i]]++;
        }
        return cnt; 
    }
};