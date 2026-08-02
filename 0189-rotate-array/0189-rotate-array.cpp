class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n=arr.size();
        k=k%n;
      vector<int>temp;
      for(int i=n-k;i<n;i++){
        temp.push_back(arr[i]);
      }
      for(int i=n-1;i>=0;i--){
        if(i-k>=0){
            arr[i]=arr[i-k];
        }
      }
      for(int i=0;i<k;i++){
        arr[i]=temp[i];
      }
      //return arr;

    }
};