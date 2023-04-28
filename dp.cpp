class Solution {
public:
 // suraj made some changes to variable in dp question and removed some uselss comments
 
    int longestCommonSubsequence(string a, string b) {

        int n = a.size();
        int m = b.size();

        vector<vector<int>>dp(n+1,vector<int>(m+1));

        for(int i=1 ; i<=n ; i++)
        {
            for(int j=1 ; j<=m ; j++)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
        
    }
};