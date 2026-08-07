class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
      int s=0;
      int e=n-1;
      int ans=n-1;
      while(s<=e){
        int mid=s+(e-s)/2;
        if(mid+1<n&&arr[mid+1]>arr[mid]){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
      }
      return ans;
    }
};