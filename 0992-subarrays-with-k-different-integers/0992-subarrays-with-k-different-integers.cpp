class Solution {
public:
    int atleast(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        int ans = 0;
        int j = 0;
        int distinct = 0;
        for (int i = 0; i < n; i++) {
            if (freq[nums[i]] == 0) {
                distinct++;
            }
            freq[nums[i]]++;
            while (distinct >= k) {
                ans += n - i;
                freq[nums[j]]--;
                if (freq[nums[j]] == 0) {
                    distinct--;
                }
                j++;
            }
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atleast(nums, k) - atleast(nums,k+1);
    }
};