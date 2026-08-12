class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans(rowIndex+1);
        int sz=1;
        for(int j=0;j<=rowIndex;j++){
           ans[j]= vector<int>(sz++);
        }
         for (int i = 0; i <=rowIndex; i++) {
            ans[i][0] = 1;             
            ans[i][i] = 1;              
        }
        for (int i = 2; i <=rowIndex; i++) {
            for (int j = 1; j < i; j++) {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
     return ans[rowIndex];

    }
};