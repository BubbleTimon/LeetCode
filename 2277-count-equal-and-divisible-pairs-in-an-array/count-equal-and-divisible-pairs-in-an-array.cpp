class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int ret = 0;
        int size = nums.size();
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                int n = nums[i], m = nums[j];
                if ((n == m) && (i * j % k == 0))
                    ret++;
            }
        }

        return ret;
    }
};