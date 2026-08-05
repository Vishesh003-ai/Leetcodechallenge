class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();
        int sr=0;
        int er=row-1;
        int sc=0;
        int ec=col-1;
        vector<int>ans;
        while(sr<=er&&sc<=ec){
        for(int col=sc;col<=ec;col++){
             ans.push_back(arr[sr][col]);
        }
        sr++;
        for(int row=sr;row<=er;row++){
            ans.push_back(arr[row][ec]);
        }
        ec--;
      if(sr<=er){
        for(int col=ec;col>=sc;col--){
            ans.push_back(arr[er][col]);
        }
        er--;}
if(sc<=ec){
        for(int row=er;row>=sr;row--){
            ans.push_back(arr[row][sc]);
        }
        sc++;
      }

        }
        
        return ans;
    }
};