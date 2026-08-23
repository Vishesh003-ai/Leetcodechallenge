class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res="";
        int m=part.length();
        for(int i=0;i<s.length();i++){
            res.push_back(s[i]);
            if(res.length()>=m){
                if(res.substr(res.length()-m)==part){
                    for(int i=0;i<m;i++){
                        res.pop_back();
                    }
                }
            }
        }
        return res;
    }
};