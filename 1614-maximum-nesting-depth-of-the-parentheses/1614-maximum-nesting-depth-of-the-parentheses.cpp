class Solution {
public:
    int maxDepth(string s) {
        int c1=0;
        int c2=0;
        int maxdepth=INT_MIN;
        int depth=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                c1++;
            }
            else if(ch==')'){c2++;}
            
                depth=c1-c2;
                maxdepth=max(maxdepth,depth);
            
        }
        return maxdepth;
    }
};