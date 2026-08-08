class Solution {
public:

    bool possiblesoln(vector<int>&arr,int k,int h){
     long long int timetaken=0;
     for(int i=0;i<arr.size();i++){
        timetaken+=ceil(arr[i]/(double)k);
     }
     return timetaken<=h;

    }
    int minEatingSpeed(vector<int>& arr, int h) {
        int s=1;
        int e=*max_element(arr.begin(),arr.end());
        int ans=-1;
        while(s<=e){
      int mid=s+(e-s)/2;
       if(possiblesoln(arr,mid,h)){
          ans=mid;
          e=mid-1;
       }
       else{
        s=mid+1;
       }


        }
        return ans;
    }
};