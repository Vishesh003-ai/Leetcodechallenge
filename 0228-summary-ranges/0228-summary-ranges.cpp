class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int start = 0;
        int end = 1;
        while (end < nums.size()) {
            if (nums[end] != nums[end - 1] + 1) {
                if (start == end - 1) {
                    ans.push_back(to_string(nums[start]));
                }
                else {
                    ans.push_back(to_string(nums[start]) + "->" 
                                  + to_string(nums[end - 1]));
                }
                start = end;
            }
            end++;
        }
        // Handle the last range
        if (start == nums.size() - 1) {
            ans.push_back(to_string(nums[start]));
        }
        else if (start < nums.size()) {
            ans.push_back(to_string(nums[start]) + "->" 
                          + to_string(nums[nums.size() - 1]));
        }
        return ans;
    }
};