class Solution {
public:
    
    // Time Complexity is 2^n
    set<vector<int>>subsets;
    void helper(int index,vector<int>&current, vector<int>&nums){
        subsets.insert(current); 
        for(int i=index;i<nums.size();i++){
            current.push_back(nums[i]); 
            helper(i+1,current,nums);  
            current.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>current;
        helper(0,current,nums);
        vector<vector<int>>ans(subsets.begin(),subsets.end()); 
        return ans;
    }
    
};