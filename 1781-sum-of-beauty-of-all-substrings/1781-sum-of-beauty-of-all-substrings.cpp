class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int freq[26]={0};
           int maxf=INT_MIN;
          for(int j=i;j<s.length();j++){
             freq[s[j]-'a']++;

             maxf=max(maxf,freq[s[j]-'a']);
             int minf=INT_MAX;
             for(int k=0;k<26;k++){
                if(freq[k]>0){
                    minf=min(minf,freq[k]);
                }
             }
               sum+=(maxf-minf);
          }
       
        }
        return sum;
    }
};