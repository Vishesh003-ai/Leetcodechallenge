class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();

        int minIdx = 0;
        int maxdiff = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[minIdx]) {
                minIdx = i;
            }

            maxdiff = max(maxdiff, arr[i] - arr[minIdx]);
        }

        return maxdiff;
    }
};