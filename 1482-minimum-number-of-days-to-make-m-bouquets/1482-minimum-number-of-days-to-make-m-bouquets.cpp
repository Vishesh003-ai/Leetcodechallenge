class Solution {
public:
     bool possiblesoln(vector<int>&arr,int soln,int m,int k){
        int n=arr.size();
        int c=0;
        int adj=0;
        if((long long)m*k>n) return false;
         for(int i=0;i<n;i++){

            if(arr[i]<=soln){
               adj++;
               if(adj==k){
                c++;
                adj=0;
               }
            }
           else{
            adj=0;
           }
     }
     return c>=m;
     }

    int minDays(vector<int>& arr, int m, int k) {
        int s=*min_element(arr.begin(),arr.end());
        int e=*max_element(arr.begin(),arr.end());
       int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(possiblesoln(arr,mid,m,k)){
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