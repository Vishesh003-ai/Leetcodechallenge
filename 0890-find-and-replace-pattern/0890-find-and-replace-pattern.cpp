class Solution {
public:
void normalisestring(string &str){
    char start='a';
    unordered_map<char,char>mapping;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(mapping.find(ch)==mapping.end()){
            mapping[ch]=start;
            start++;
        }
    }
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        char mappedcharacter=mapping[ch];
        str[i]=mappedcharacter;
    }

}
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        normalisestring(pattern);
        for(int i=0;i<words.size();i++){
            string currentword=words[i];
            normalisestring(currentword);
            if(pattern==currentword){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};