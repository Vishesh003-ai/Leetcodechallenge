class Solution {
public:
    int numPrimeArrangements(int n) {
        const long long M = 1e9 + 7;
        vector<bool> p(n + 1, true);
        p[0] = p[1] = false;
        for (int i = 2; i * i <= n; i++)
            if (p[i])
                for (int j = i * i; j <= n; j += i)
                    p[j] = false;
        int cnt = 0;
        for (int i = 2; i <= n; i++)
            if (p[i]) cnt++;
        long long ans = 1;
        for (int i = 2; i <= cnt; i++)
            ans = ans * i % M;
        for (int i = 2; i <= n - cnt; i++)
            ans = ans * i % M;
        return ans;
    }
};