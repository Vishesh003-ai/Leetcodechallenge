class Solution {
public:

    int countLessEqual(vector<vector<int>> &mat, int rows, int cols, int x) {
        int count = 0;
        for (int i = 0; i < rows; i++) {
            count += upper_bound(mat[i].begin(), mat[i].end(), x) - mat[i].begin();
        }
        return count;
    }

    int median(vector<vector<int>> &mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int low = mat[0][0];
        int high = mat[0][cols - 1];

        for (int i = 1; i < rows; i++) {
            low = min(low, mat[i][0]);
            high = max(high, mat[i][cols - 1]);
        }

        int req = (rows * cols) / 2;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int smallEqual = countLessEqual(mat, rows, cols, mid);
            if (smallEqual <= req) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};