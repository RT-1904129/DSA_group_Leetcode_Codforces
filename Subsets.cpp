class Solution {
public:
    
    // Time Complexity is 2^n BackTracking solution
    vector<vector<int>>result;
    void permutation(vector<int>& nums,int start,int size,vector<int>&arr){
        if(start <= size){
            result.push_back(arr);
        }
        for(int i = start;i<size;i++){
            arr.push_back(nums[i]);
            permutation(nums,i+1,size,arr);
            arr.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size()==0) return result;
        vector<int>arr;
        permutation(nums,0,nums.size(),arr);
        return result;
        
        // iterative silution
        vector<vector<int>>result{{}};
        for(int i=0;i<nums.size();i++){
            int k = result.size();
            for(int j=0;j<k;j++){
                result.push_back(result[j]);
                result.back().push_back(nums[i]);
            }
        }
        return result;
    }
};