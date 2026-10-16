class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxGap = 0;
        if(nums.size() <= 1) return 0;

        for(int i=0; i<nums.size()-1; i++) {
            int gap = nums[i+1] - nums[i];
            maxGap = max(gap, maxGap);
        }

        return maxGap;
    }
};