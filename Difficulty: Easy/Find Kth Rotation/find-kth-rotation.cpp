class Solution {
  public:
  int findpivot(vector<int>&arr){
      int n=arr.size();
      int s=0;
      int e=n-1;
      //int pivot=-1;
      while(s<=e){
          int mid=s+(e-s)/2;
          if(mid+1<n&&arr[mid]>arr[mid+1]){
              return mid;
          }
          else if(arr[mid]<arr[0]){
              e=mid-1;
          }
          else{
              s=mid+1;
          }
      }
      return -1;
      
  }
    int findKRotation(vector<int> &arr) {
        //int n=arr.size();
        //if(arr[0]<=arr[n-1]) return 0;
        int pivotidx=findpivot(arr);
        if (pivotidx == -1)
    return 0;
        return pivotidx+1;
    }
};
