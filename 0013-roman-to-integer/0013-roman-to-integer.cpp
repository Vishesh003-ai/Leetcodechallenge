class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mapping{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int ans=0;
        int prev=0;
        for(int i=s.length()-1;i>=0;i--){
            if(mapping[s[i]]<prev){
                ans-=mapping[s[i]];
            }
            else{
                ans+=mapping[s[i]];
            }
            prev=mapping[s[i]];
        }
return ans;
    }
};