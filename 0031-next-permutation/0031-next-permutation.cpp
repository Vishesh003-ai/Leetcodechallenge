class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        int breakpoint;
        int breakindex=-1;
        int change;
        for(int i=n-1;i>0;i--){
          if(arr[i-1]<arr[i]){
            breakpoint=arr[i-1];
            breakindex=i-1;
            break;
          }
        }
        if(breakindex==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        //int mindiff=INT_MAX;
          for(int i=n-1;i>breakindex;i--){
            if(arr[i]>breakpoint){
              swap(arr[i],arr[breakindex]);
              break;
            }
          }
           //swap(arr[change],arr[breakindex]);
          
         reverse(arr.begin()+breakindex+1,arr.end());

        }

//return arr;

    
};