class Solution {
  public:
  bool possiblesoln(vector<int>&arr,int soln,int k){
      int n=arr.size();
      int c=1;
      int time=0;
      if(n<k) return false;
      for(int i=0;i<n;i++){
           if(arr[i]>soln) return false;
           if(time+arr[i]>soln){
               c++;
               time=arr[i];
               if(c>k) return false;
           }
          else{
              time+=arr[i];
          }
      }
      return true;
      
  }
    int minTime(vector<int>& arr, int k) {
        int s=*min_element(arr.begin(),arr.end());
        int e=accumulate(arr.begin(),arr.end(),0);
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(possiblesoln(arr,mid,k)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        
    }
};