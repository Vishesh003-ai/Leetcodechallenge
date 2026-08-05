class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int>ans;
        int i,j=0;
        int n=a.size();
        int m=b.size();
        while(i<n&&j<m){
   if(a[i]<b[j]){
       if(ans.empty()|| a[i]!=ans.back()){
           ans.push_back(a[i]);
       }
       i++;
   }
   else if(a[i]>b[j]){
       if(ans.empty()|| b[j]!=ans.back()){
           ans.push_back(b[j]);
       }
       j++;
   }
       else{
           if(ans.empty()|| b[j]!=ans.back()){
           ans.push_back(b[j]);
       }
       i++;
       j++;
           
       }        
            
        }
        while(i<n){
            if(ans.empty()|| a[i]!=ans.back()){
                ans.push_back(a[i]);
            }
            i++;
        }
        while(j<m){
            if(ans.empty()|| b[j]!=ans.back()){
                ans.push_back(b[j]);
            }
            j++;
        }
        return ans;
        
        
        
    }
};