class Solution {
public:
    static bool mycomp(const string& a, const string& b) {
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        snums.reserve(nums.size()); 
        for (int n : nums) { 
            snums.push_back(to_string(n));
        }
        sort(snums.begin(), snums.end(), mycomp);
        if (snums[0] == "0") return "0";
        string ans = "";
        for (const string& s : snums) {
            ans += s;
        }
        return ans;
    }
};