class Solution {
private:
    int robRange(vector<int>& nums, int left, int right) {
        int prev2 = 0;
        int prev1 = 0;

        for (int i = left; i <= right; i++) {
            int current = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }

public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

        return max(robRange(nums, 0, nums.size() - 2),
                   robRange(nums, 1, nums.size() - 1));
    }
};
