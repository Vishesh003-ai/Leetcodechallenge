class Solution {
public:
    int atleastk(vector<int>& nums, int k) {
        int j = 0, dis = 0, ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] & 1)
                dis++;
            while (dis >= k) {
                ans += n - i;
                if (nums[j] & 1)
                    dis--;
                j++;
            }
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atleastk(nums, k) - atleastk(nums, k + 1);
    }
};