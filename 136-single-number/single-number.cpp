class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        int ret = 0;

        for (int i : nums)
            m[i]++;

        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second == 1) {
                ret = it->first;
                break;
            }
        }

        return ret;
    }
};