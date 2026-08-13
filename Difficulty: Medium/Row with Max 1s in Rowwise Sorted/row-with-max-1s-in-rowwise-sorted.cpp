class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int row=arr.size();
        int col=arr[0].size();
        int ones=0;
        int maxone=0;
        int idx=-1;
        int ans=-1;
       for(int i=0;i<row;i++){
           auto it=lower_bound(arr[i].begin(),arr[i].end(),1);
           int idx=it-arr[i].begin();
           ones=(col-idx);
           if(ones>maxone){
               ans=i;
               maxone=max(ones,maxone);
           }
          // maxone=max(ones,maxone)
       }
  
     return ans;
        
    }
};