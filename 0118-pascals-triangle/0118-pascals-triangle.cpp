class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> arr(n);

        int sz = 1;
        for (int i = 0; i < n; i++) {
            arr[i] = vector<int>(sz++);
        }

        for (int i = 0; i < n; i++) {
            arr[i][0] = 1;             
            arr[i][i] = 1;              
        }

        for (int i = 2; i < n; i++) {
            for (int j = 1; j < i; j++) {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }

        return arr;
    }
};