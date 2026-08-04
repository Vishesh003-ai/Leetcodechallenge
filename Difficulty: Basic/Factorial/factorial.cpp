class Solution {
  public:
    int factorial(int n) {
        // code here
        int fact=1;
        for(int i=n;i>=1;i--){
            fact*=i;
        }
        return fact;
    }
};