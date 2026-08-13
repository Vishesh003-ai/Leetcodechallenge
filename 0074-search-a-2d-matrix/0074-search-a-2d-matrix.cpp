class Solution {
public:
    bool searchMatrix(vector<vector<int>>&arr, int target) {
        int row=arr.size();
        int col=arr[0].size();
        
        int s=0;
        int e=(row*col)-1;
        while(s<=e){
            int m=s+(e-s)/2;
            int r=m/col;
            int c=m%col;
            if(arr[r][c]==target){
                return true;
            }
            else if(target>arr[r][c]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
        
     return false;
    }
};