class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_check = 0;
        for(int i = 0; i<nums.size(); i++){
            xor_check = xor_check^nums[i];
        }
    return xor_check;
    }
};
