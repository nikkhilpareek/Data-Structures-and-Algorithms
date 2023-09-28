// O(n^2) Approach 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};

// O(n) Approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,diff;
        unordered_map<int,int>umap;
        vector<int>res;
        for(i = 0;i<nums.size();i++){
            diff = target - nums[i];
            if(umap.find(diff) != umap.end()){
                res = {i, umap[diff]};
                return res;
            }
            umap[nums[i]] = i;
        }
        return {};
        
    }
};
