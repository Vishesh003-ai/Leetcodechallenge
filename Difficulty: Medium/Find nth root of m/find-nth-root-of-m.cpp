class Solution {
  public:
    int nthRoot(int n, int m) {
        int s=0;
        int e=m-1;
        int target=m;
        if(n==1) return m; 
        if(m==0) return 0;
        if(m==1) return 1;
        while(s<=e){
            int mid=s+(e-s)/2;
           long long int product=1;
            for(int i=0;i<n;i++){
                 product*=mid;
            }
            if(target==product){
                return mid;
            }
            else if(target>product){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
        return -1;
        
    }
};