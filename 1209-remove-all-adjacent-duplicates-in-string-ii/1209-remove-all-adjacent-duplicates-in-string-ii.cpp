class Solution {
public:
    string removeDuplicates(string s, int k) {
        string res="";
        vector<int>cnt;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
         if(!res.empty()&&res.back()==ch){
            cnt.push_back(cnt.back()+1);
         }
         else{
            cnt.push_back(1);
         }
         res.push_back(ch);
         if(cnt.back()==k){
            for(int i=0;i<k;i++){
                res.pop_back();
                cnt.pop_back();
            }
         }

        }
        return res;
    }
};