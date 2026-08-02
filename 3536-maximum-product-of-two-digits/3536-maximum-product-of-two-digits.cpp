class Solution {
public:
    int maxProduct(int n) {
        vector<int>temp;
        while(n!=0){
            int digit=n%10;
            temp.push_back(digit);
            n=n/10;
        }
        sort(temp.begin(),temp.end());
        int m=temp.size();
     return (temp[m-2]*temp[m-1]) ;

    }
};