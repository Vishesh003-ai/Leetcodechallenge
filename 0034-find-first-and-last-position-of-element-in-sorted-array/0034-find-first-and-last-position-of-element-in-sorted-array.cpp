class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        int firstoc=-1;
        int lastoc=-1;
        //if(arr.empty()) return {-1,-1};
        while(s<=e){
         int mid=s+(e-s)/2;
         if(arr[mid]==target){
            firstoc=mid;
            e=mid-1;
         }
         else if(target>arr[mid]){
            s=mid+1;
         }
         else{
            e=mid-1;
         }
        }
        s=0;
        e=n-1;
        while(s<=e){
         int mid=s+(e-s)/2;
         if(arr[mid]==target){
            lastoc=mid;
            s=mid+1;
         }
         else if(target>arr[mid]){
            s=mid+1;
         }
         else{
            e=mid-1;
         }

        }


     return{firstoc,lastoc};








    }
};