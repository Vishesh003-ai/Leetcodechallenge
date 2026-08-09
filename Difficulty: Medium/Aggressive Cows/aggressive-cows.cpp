class Solution {
  public:
   bool possiblesoln(vector<int>&arr,int soln,int k){
       int n=arr.size();
       int cow=1;
       int pos=arr[0];
       for(int i=1;i<n;i++){
           if(arr[i]-pos>=soln){
               cow++;
               pos=arr[i];
           }
           
       }
       return cow>=k;
       
   }
  
  
  
    int aggressiveCows(vector<int> &arr, int k) {
         int n=arr.size();
         sort(arr.begin(),arr.end());
        int s=1;
        int e=arr[n-1]-arr[0];
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(possiblesoln(arr,mid,k)){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
        
    }
};