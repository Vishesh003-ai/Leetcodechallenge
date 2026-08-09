class Solution {
  public:
    bool possiblesoln(vector<int>&arr,long long int soln,int k){
       long long int n=arr.size();
       long long int c=1;
        long long int pagesum=0;
        if((long long)n<k) return false;
        for(int i=0;i<n;i++){
            if(arr[i]>soln ) return false;
            if(pagesum+arr[i]>soln){
                c++;
                pagesum=arr[i];
                if(c>k) return false;
               
            }
             else{
                    pagesum+=arr[i];
                }
        }
        
        
        
       return true; 
        
    }
  
  
  
    int findPages(vector<int> &arr, int k) {
       long long int s=*max_element(arr.begin(), arr.end());;
       long long  e=accumulate(arr.begin(),arr.end(),(long long)0);
         long long int ans=-1;
        while(s<=e){
           long long int mid =s+(e-s)/2;
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