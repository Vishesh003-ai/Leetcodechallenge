class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
     int n =arr.size();
     int s=0;
     int e=n-1;
     while(s<=e){
      int mid=s+(e-s)/2;
        int cv=arr[mid];
        int lv=-1;
        int rv=-1;
        if(mid-1>=0){ lv=arr[mid-1];}
        if(mid+1<n){ rv=arr[mid+1];}
      if(cv!=lv&&cv!=rv) return cv;
     else if(cv==lv&& cv!=rv){
        int pairidx=mid-1;
        if(pairidx&1){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
     }
     else if(cv==rv&&cv!=lv){
        int pairidx=mid;
        if(pairidx&1){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
     }
     }




return -1;



    }
};