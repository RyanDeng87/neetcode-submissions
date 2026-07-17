class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> tracking;
        
        if (nums.size() == 0) return false;

        for (int i = 0; i < nums.size(); i++) {
            if (tracking.count(nums[i])) return true;
            tracking.insert(nums[i]);
        }

        return false;
    }
};