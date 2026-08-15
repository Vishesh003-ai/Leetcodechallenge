class Solution {
public: 
     bool possiblesoln(vector<int>& arr, long long soln, int cars){
      long long totalcars=0;
      for(int i=0;i<arr.size();i++){
        totalcars+=(long long)(sqrt(soln/arr[i]));
      }

return totalcars>=cars;

     }

 


    long long repairCars(vector<int>& arr, int cars) {
        long long maxi=*max_element(arr.begin(),arr.end());
        long long s=1;
        long long e=maxi*cars*cars;
       long long ans=-1;
        while(s<=e){
        long long mid=s+(e-s)/2;
        if(possiblesoln(arr,mid,cars)){
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