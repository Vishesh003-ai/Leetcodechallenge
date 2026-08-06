class Solution {
public:
    int findpivot(vector<int>&arr){
       int n=arr.size();
       if(arr[0] <= arr[n-1])

    return n-1;
        int s=0;
        int e=n-1;
        int pivot=-1;
        while(s<=e){
        int mid=s+(e-s)/2;
       if(mid+1<n&&arr[mid]>arr[mid+1]){
          return mid;
       }
       else if(arr[mid]<arr[0]){
        e=mid-1;
       }
       else{
        s=mid+1;
       }

        }
        return pivot;
    }
    int binarysearch(vector<int>&arr,int target,int s,int e){
        int n=arr.size();
        //int s=0;
        //int e=n-1;
        int ans=-1;
        while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target) return mid;
        else if(target>arr[mid]) s=mid+1;
        else{
            e=mid-1;
        }
        }
        return ans;
    }
    int search(vector<int>& arr, int target) {
        if(arr.empty())return -1;
    
        int pivotidx=findpivot(arr);
        int ans=-1;
      int n=arr.size();
        if(target>=arr[0]&&target<=arr[pivotidx]){
            int s=0;
            int e=pivotidx;
         ans=binarysearch(arr,target,s,e);
        }
else{
    int s=pivotidx+1;
    int e=n-1;
    ans=binarysearch(arr,target,s,e);
}     

return ans;
    }
};