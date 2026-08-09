class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        //int n=arr.size();
        int missing=0;
        int ans=-1;
        while(s<=e){
        int mid=s+(e-s)/2;
        int missing=arr[mid]-1-mid;
      if(missing<k){
        s=mid+1;
      }
      else{
        e=mid-1;
      }

     

        }
return e+k+1;

    }
};