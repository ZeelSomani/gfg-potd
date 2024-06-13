const int MOD = 1e9 + 7;
class Solution 
{
public:
    vector<int> dp;  
    Solution() {}  
    int padovanSequence(int n) 
    {
        if (n <= 2) return 1;
        dp.resize(n + 1, 0);
        dp[0] = dp[1] = dp[2] = 1;
        for (int i = 3; i <= n; ++i)
        {
            dp[i] = (dp[i - 2] + dp[i - 3]) % MOD;
        }
        return dp[n];
    }
};
