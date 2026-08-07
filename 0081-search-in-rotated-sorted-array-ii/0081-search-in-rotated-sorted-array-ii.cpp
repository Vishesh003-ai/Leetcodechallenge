class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
       int mid=s+(e-s)/2;
     if(arr[mid]==target) return true;
     if(arr[s]==arr[mid]&&arr[mid]==arr[e]){
        s++;
        e--;
        continue;
     }

     if(arr[s]<=arr[mid]){
        if(arr[s]<=target&& target<=arr[mid]){
          e=mid-1;
        }
        else{
            s=mid+1;
        }
     }
     else{
     if(target>=arr[mid]&&target<=arr[e]){
        s=mid+1;
        }
        else{
            e=mid-1;
        }
     }
        }
      return false;
    }
};