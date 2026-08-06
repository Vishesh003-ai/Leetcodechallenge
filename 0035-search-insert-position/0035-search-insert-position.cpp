class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int s=0;
        int e=arr.size()-1;
        int ans=arr.size();
        while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]>=target){
          ans=mid;
          e=mid-1;
        }
       if(target>arr[mid]){
        s=mid+1;
       }


        }
        return ans;
    }
};