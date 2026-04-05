class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res(n, -1);

        int windowSize = 2 * k + 1;
        if (windowSize > n) return res;

        long long sum = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (i >= windowSize) {
                sum -= nums[i - windowSize];
            }

            if (i >= windowSize - 1) {
                int center = i - k;
                res[center] = sum / windowSize;
            }
        }

        return res;
    }
};
