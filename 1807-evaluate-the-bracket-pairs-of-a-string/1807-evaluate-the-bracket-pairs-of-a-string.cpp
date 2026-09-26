class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(auto &v : knowledge) {
            mp[v[0]] = v[1];
        }
        int start;
        int end;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                start = i + 1;
            }
            else if(s[i] == ')') {
                end = i - 1;
                string ss = s.substr(start, end - start + 1);
                if(mp.find(ss) != mp.end()) {
                    s.replace(start - 1, end - start + 3, mp[ss]);
                    i = start - 2;//as loop already made i++
                }
                else {
                    s.replace(start - 1, end - start + 3, "?");
                    i = start - 2;
                }
            }
        }
        return s;
    }
};