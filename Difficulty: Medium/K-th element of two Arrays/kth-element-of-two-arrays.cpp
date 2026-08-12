class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
       if(a.size()>b.size()){
           return kthElement(b,a,k);
       }
       int n1=a.size();
       int n2=b.size();
       int left=k;
       int s=max(0,k-n2);
       int e=min(k,n1);
       while(s<=e){
           int mid1=s+(e-s)/2;
           int mid2=k-mid1;
           
           int l1=(mid1==0)?INT_MIN:a[mid1-1];
           int l2=(mid2==0)?INT_MIN:b[mid2-1];
           int r1=(mid1==n1)?INT_MAX:a[mid1];
           int r2=(mid2==n2)?INT_MAX:b[mid2];
           if(l1<=r2&&l2<=r1){
               return max(l1,l2);
               
           }
           if(l1>r2){
               e=mid1-1;
           }
           else{
               s=mid1+1;
           }
           
           
       }
       return -1;
       
       
    }
};