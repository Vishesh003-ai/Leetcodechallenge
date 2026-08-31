class Solution {
public:
    int compress(vector<char>& chars) {
        int read=0;
        int write=0;
        int n=chars.size();
        while(read<n){
         int count=0;
          char ch=chars[read];
         while(read<n&&chars[read]==ch){
            count++;
            read++;
         }
          chars[write++]=ch;
          if(count>1){
            int start=write;
            while(count>0){
                chars[write++]=(count%10)+'0';
                count/=10;
            }
            int left=start;
            int right=write-1;
            while(left<right){
                swap(chars[left++],chars[right--]);
            }
          }



        }
return write;


    }
};