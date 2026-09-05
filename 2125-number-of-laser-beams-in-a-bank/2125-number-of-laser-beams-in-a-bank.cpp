class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int laser = 0;
        int prev = 0;
        // Pass by const reference to prevent copying strings
        for (const string& row : bank) {
            // std::count is heavily optimized and replaces your inner loop
            int curr = count(row.begin(), row.end(), '1');
            if (curr > 0) {
                laser += curr * prev;
                prev = curr;
            }
        }
        return laser;
    }
};