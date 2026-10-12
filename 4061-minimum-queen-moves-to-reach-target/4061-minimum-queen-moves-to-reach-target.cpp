class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int rowstart1=source[0];
        int colstart1=source[1];
        int trow=target[0];
        int tcol=target[1];
        int row2=source[0]-target[0];
        int col2=source[1]-target[1];
        if(rowstart1==trow && colstart1==tcol ) {
            return 0;
        }
        if(row2==0||col2==0){
            return 1;
        }
        if(abs(row2)==abs(col2)) {
            return 1;}
        return 2;
    }
};