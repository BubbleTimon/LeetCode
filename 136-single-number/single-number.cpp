class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        int ret = 0;

        for (int i : nums)
            ret ^= i;
            
        return ret;
    }
};