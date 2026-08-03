class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums[0];
        int maj=1;
        for(int i=1;i<nums.size();i++){
      if(maj==0){
        ele=nums[i];
      }
      if(ele==nums[i]){
        maj++;
      }
      else{
        maj--;
      }

        }
        return ele;
    }
};