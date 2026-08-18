class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int ans=-1;
        int maj=1;
        int ele=arr[0];
        for(int i=1;i<arr.size();i++){
            if(maj==0){
                ele=arr[i];
            }
            if(arr[i]==ele){
                maj++;
            }
            else{
                maj--;
            }
           
            
        }
         maj=0;
         for(int x:arr){
             if(x==ele){
                 maj++;
             }
         }
        if(maj>arr.size()/2) return ele;
        return -1;
    }
};