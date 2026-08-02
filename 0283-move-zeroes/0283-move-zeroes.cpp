class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertpos=0;
        int n=nums.size();
       // vector<int>temp;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[insertpos] = nums[i];
                insertpos++;
            }
            
        }
        while (insertpos < nums.size()) {

            nums[insertpos] = 0;

            insertpos++;

        }
       
    }
};