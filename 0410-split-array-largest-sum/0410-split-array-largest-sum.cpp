class Solution {
public:
    bool possiblesoln(vector<int>&arr,int soln,int k){
    int n=arr.size();
    int sum=0;
    int count=1;
    for(int i=0;i<n;i++){
     if(sum+arr[i]<=soln){
        sum+=arr[i];
     }
     else{
        sum=arr[i];
        count++;
     }

    }
    return count<=k;

    }




    int splitArray(vector<int>& arr, int k) {
        int s=*max_element(arr.begin(),arr.end());
        int e=accumulate(arr.begin(),arr.end(),0);
        int ans=0;
     while(s<=e){
      int m=s+(e-s)/2;
      if(possiblesoln(arr,m,k)){
        ans=m;
        e=m-1;
      }
     else{
        s=m+1;
     }
     }
      return ans;
    }
};