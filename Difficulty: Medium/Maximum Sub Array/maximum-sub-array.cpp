class Solution {
public:
    vector<int> findSubarray(vector<int>& arr) {

        long long maxi = -1;
        long long sum = 0;
        int start = 0;
        int ansstart = -1;
        int ansend = -1;

        for (int i = 0; i < arr.size(); i++) {

            if (arr[i] >= 0) {
                sum += arr[i];

                if (sum > maxi || (sum == maxi && (i - start > ansend - ansstart))) {
                    maxi = sum;
                    ansstart = start;
                    ansend = i;
                }
            }
            else {
                sum = 0;
                start = i + 1;
            }
        }

        if (maxi == -1)
            return {-1};

        vector<int> ans;
        for (int i = ansstart; i <= ansend; i++)
            ans.push_back(arr[i]);

        return ans;
    }
};