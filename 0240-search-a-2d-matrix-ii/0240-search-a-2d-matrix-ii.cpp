class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int row=arr.size();
        int col=arr[0].size();
        for(int i=0;i<row;i++){
        int s=0;
        int e=col-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(arr[i][m]==target){
                return true;
            }
            else if(target>arr[i][m]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        }
     return false;
    }
};