class Solution {
public:
bool possiblesoln(vector<int>&arr,int soln,int threshold){
    int n=arr.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)arr[i]/soln);
    }
    return sum<=threshold;



}
    int smallestDivisor(vector<int>& arr, int threshold) {
        int s=1;
        int e=*max_element(arr.begin(),arr.end());
       int ans=-1;
       while(s<=e){
        int mid=s+(e-s)/2;
        if(possiblesoln(arr,mid,threshold)){
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