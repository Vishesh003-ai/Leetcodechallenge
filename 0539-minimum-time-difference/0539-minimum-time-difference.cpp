class Solution {
public:
    int convertToMin(string &time) {
        int hr = (time[0] - '0') * 10 + (time[1] - '0');
        int mn = (time[3] - '0') * 10 + (time[4] - '0');

        return hr * 60 + mn;
    }

    int findMinDifference(vector<string>& timePoints) {
        vector<bool> seen(1440, false);

        for (auto &time : timePoints) {
            int t = convertToMin(time);

            // Duplicate time
            if (seen[t])
                return 0;

            seen[t] = true;
        }

        int first = -1;
        int prev = -1;
        int ans = INT_MAX;

        for (int i = 0; i < 1440; i++) {
            if (seen[i]) {
                if (first == -1)
                    first = i;

                if (prev != -1)
                    ans = min(ans, i - prev);

                prev = i;
            }
        }

        // Circular difference: last -> first next day
        ans = min(ans, first + 1440 - prev);

        return ans;
    }
};