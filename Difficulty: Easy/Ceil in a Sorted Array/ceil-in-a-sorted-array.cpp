class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int s=0;
        int e=arr.size()-1;
        int ans=-1;
        if(x>arr[arr.size()-1]) return -1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]>=x){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            
            
            
        }
    }
};