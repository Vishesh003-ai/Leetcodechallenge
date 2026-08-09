class Solution {
public:


bool possiblesoln(vector<int>&arr,int soln,int k){
      int n=arr.size();
      int sum=0;
      int count=1;
      int adj=0;
      if(n<k) return false;
      for(int i=0;i<n;i++){
          if (sum + arr[i] <= soln) 
            sum += arr[i];
         else {
            count++;
            sum = arr[i];
        }
        
}
return count <= k;
  }
    int splitArray(vector<int>& arr, int k) {
         int s=*max_element(arr.begin(),arr.end());
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