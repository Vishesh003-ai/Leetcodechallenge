class Solution {
public:
static bool mpcmp(pair<int,char>a,pair<int,char>b){
    return a.first>b.first;
}
    string frequencySort(string s) {
        int freq[256]={0};
        for(char c:s){
            freq[c]++;
        }
    vector<pair<int,char>>v;
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            v.push_back({freq[i],(char)i});
        }
    }
    sort(v.begin(),v.end(),mpcmp);
    string ans="";
    ans.reserve(s.length());
    for(auto &p:v){
        ans.append(p.first,p.second);
    }
    return ans;
    }
};