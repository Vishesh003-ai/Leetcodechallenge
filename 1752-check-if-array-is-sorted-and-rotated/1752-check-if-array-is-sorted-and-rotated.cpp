class Solution {
public:
    bool check(vector<int>& arr) {
        int pivotidx = -1;
        int n = arr.size();
        int count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                pivotidx = i;
                count++;
            }
        }

        if (pivotidx == -1) return true;
      if (count == 0) return true;

        if (count <=1 && arr[n - 1] <= arr[0]) return true;
        return false;
    }
};