class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result_vec(n,0);
        int lp = 0, rp = n-1;
        int left_num, right_num;
        
        for (int i = n-1; i >= 0; i--) {
            left_num = abs(nums[lp]);
            right_num = abs(nums[rp]);
    
            if (left_num > nums[rp]) {
                result_vec[i] = left_num * left_num;
                lp++;
            } else {
                result_vec[i] = right_num * right_num;
                rp--;
            }
        }
        return result_vec;
    }
};