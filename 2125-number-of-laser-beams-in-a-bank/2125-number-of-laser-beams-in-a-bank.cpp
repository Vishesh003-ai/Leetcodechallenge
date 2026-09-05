class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int laser=0;
        int prev=0;
        for(string &row:bank){
          int curr=0;
          for(char ch:row){
            if(ch=='1'){
                curr++;
            }
          }
if(curr>0){
            laser+=curr*prev;
            prev=curr;
            }
        }
        return laser;
    }
};