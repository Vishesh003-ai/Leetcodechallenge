class Solution {
  public:
    double squareRoot(int n, int p) {
      int s=0;
      int e=n;
      int target=n;
      int ans=-1;
      while(s<=e){
          int mid=s+(e-s)/2;
         long long  product=(long long)mid*mid;
          if(product==target) return mid;
         else if(product<target){
              ans=mid;
              s=mid+1;
          }
          else{
              e=mid-1;
          }
          
      }
      //return ans;
      
      
      
      
      double root = ans;      
      double inc = 0.1;      

for (int i = 0; i < p; i++) {

    while (root * root <= n) {
        root = root + inc;
    }

    root = root - inc;  

    inc = inc / 10;     
}

return root;
        
    }
};