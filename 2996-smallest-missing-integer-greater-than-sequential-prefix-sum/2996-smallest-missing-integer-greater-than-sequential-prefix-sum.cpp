class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int count=0;
        unordered_set<int>st;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
      int sum=nums[0];
       for(int i=1;i<n;i++){
           if(nums[i]==nums[i-1]+1){
            sum+=nums[i];
           }
           else{
            break;
           }
       }
       int ans=sum;
     while(st.find(ans)!=st.end()){
         ans++;
     }
       return ans;
    }
};