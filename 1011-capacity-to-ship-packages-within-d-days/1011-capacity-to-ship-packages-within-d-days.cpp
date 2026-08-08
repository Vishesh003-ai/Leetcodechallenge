class Solution {
public:
   bool possiblesoln(vector<int>&arr,int soln,int days){
    int n=arr.size();
int count=1;
int sum=0;
     for(int i=0;i<n;i++){
      if(sum + arr[i] <= soln){
        sum+=arr[i];
      }
      else{
        sum=arr[i];
        count++;
      }

     }

     return count<=days;

   }




    int shipWithinDays(vector<int>& arr, int days) {
        int s=*max_element(arr.begin(),arr.end());
        int e=accumulate(arr.begin(),arr.end(),0);
        int ans=-1;
        while(s<=e){
       int mid=s+(e-s)/2;
       if(possiblesoln(arr,mid,days)){
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