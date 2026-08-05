class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
      bool firstrowzero=false;
      bool firstcolzero=false;
     for(int j=0;j<n;j++){ 
        if(arr[0][j]==0){
            firstrowzero=true;
            break;
        }
     }
     for(int i=0;i<m;i++){ 
        if(arr[i][0]==0){
            firstcolzero=true;
            break;
        }
     }
     
     for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
         if(arr[i][j]==0){
            arr[0][j]=0;
            arr[i][0]=0;
         }
        }
     }
for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
     if(arr[0][j]==0||arr[i][0]==0){
        arr[i][j]=0;
     }

        }
}
     if(firstrowzero){
        for (int j = 0; j < n; j++) {
                arr[0][j] = 0;
            }
     }
     if(firstcolzero){
        for(int i=0;i<m;i++){
            arr[i][0]=0;
        }
     }

    }
};