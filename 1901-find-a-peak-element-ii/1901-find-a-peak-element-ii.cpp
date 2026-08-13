class Solution {
public:
   int rowindx(vector<vector<int>>& arr,int row,int col,int j){
     int max=INT_MIN;
    //int row=arr.size();
        //int col=arr[0].size();
        int ans=-1;
     for(int i=0;i<row;i++){
      if(arr[i][j]>max){
        max=arr[i][j];
        ans=i;
      }
     }
     return ans;
   }

    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        //int idx=rowindx(arr);
        int row=arr.size();
        int col=arr[0].size();
      int s=0;
      int e=col-1;
      while(s<=e){
        
       int mid=s+(e-s)/2;
       int maxrowidx=rowindx(arr,row,col,mid);
       int cv=arr[maxrowidx][mid];
       int left=(mid-1<0)?-1:arr[maxrowidx][mid-1];
       int right=(mid+1>=col)?-1:arr[maxrowidx][mid+1];
      if(cv>left&&cv>right){
        return {maxrowidx,mid};
      }
      if(cv<left){
        e=mid-1;
      }
      else if(cv<right){
        s=mid+1;
      }


      }



     return {};

    }
};