class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(),mini=INT_MAX,result=0;
        for(int i=0;i<n;i++){
            mini= min(mini,prices[i]);
            int curr = prices[i]-mini;
            result = max(curr,result);
        }
        return result;
    }
};