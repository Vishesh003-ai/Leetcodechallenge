class Solution {
  public:
    void sort012(vector<int>& arr) {
        int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) c0++;
            if(arr[i]==1) c1++;
            if(arr[i]==2) c2++;
        }
        int i=0;
        while(c0--){
            arr[i++]=0;
        }
        while(c1--){
            arr[i++]=1;
        }
        while(c2--){
            arr[i++]=2;
        }
        
        
    }
};