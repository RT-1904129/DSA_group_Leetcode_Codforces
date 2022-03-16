class Solution {
public:
    int numSub(string s) {
        vector<long long int>arr;
        int count =0, n= s.length();
        for(int i=0;i<n;i++){
            if(s[i]== '1') count++;
            if(s[i]== '0') {
                arr.push_back(count);
                count=0;
            }
        }
        if(s[n-1]== '1') arr.push_back(count);
        long long int res=0;
        for(int i=0;i<arr.size();i++){
            res+=(arr[i]*(arr[i]+1)/2);
            res%= 1000000007;
        }
        return res;
    }
};