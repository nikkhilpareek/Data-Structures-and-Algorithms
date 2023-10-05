class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        int posI = 0;
        int negI = 1;
        for(int i = 0; i<n; i++){
            if(nums[i] < 0){
                res[negI] = nums[i];
                negI += 2;
            }else{
                res[posI] = nums[i];
                posI+=2;
            }
        }
        return res;
    }
};
