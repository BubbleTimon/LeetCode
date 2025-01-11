class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ret = 0, count = 0, size = nums.size();

        sort(nums.begin(), nums.end());
        nums.push_back(nums.back() - 1);
        
        for (int i = 0; i < size; i++) {
            if (nums[i] != nums[i + 1])
                count = 0;
            else
                count++;
            
            if (count >= size / 2) {
                ret = nums[i];
                break;
            }
        }

        return ret;
    }
};