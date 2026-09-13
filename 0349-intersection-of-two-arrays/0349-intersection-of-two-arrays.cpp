class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(nums1.begin(),nums1.end());
vector<int>ans;
    for(int x:nums2){
        if(st.count(x)){
ans.push_back(x);
//to avoid adding duplicates in ans erase use kia
st.erase(x);
        }

    }

return ans;
    }
};