class Solution {
public:
    int countFreq(vector<int>& arr, int target) {

        if (arr.empty()) return 0;

        int n = arr.size();
        int s = 0, e = n - 1;
        int firstoc = -1, lastoc = -1;

       
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] == target) {
                firstoc = mid;
                e = mid - 1;
            }
            else if (arr[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        if (firstoc == -1) return 0;
        s = 0;
        e = n - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] == target) {
                lastoc = mid;
                s = mid + 1;
            }
            else if (arr[mid] < target) {
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }

        return lastoc - firstoc + 1;
    }
};