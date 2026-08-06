class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int s=0;
        int e=n-1;
        int ans=n;
        //if(target==arr[n-1]){
           // return n-1;
       // }
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]>=target){
                ans=mid;
                e=mid-1;
            }
            
            if(target>arr[mid]){
                s=mid+1;
            }
            if(target<arr[mid]){
                e=mid-1;
            }
            //if(target<arr[mid+1]&&target>arr[mid]&&mid+1<n){
            //    ans=mid+1;
           // }
        }
        return ans;
    }
};
