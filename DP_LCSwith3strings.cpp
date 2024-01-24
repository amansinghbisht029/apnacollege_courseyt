#include <bits/stdc++.h>
using namespace std;
int dp[205][205][205];
int LCS(string &s1, string &s2, string &s3, int i, int j, int k)
{
    if (i == 0 or j == 0 or k == 0)
    {
        return 0;
    }
    if (dp[i][j][k] != -1)
        return dp[i][j][k];
    if (s1[i - 1] == s2[j - 1] and s2[j - 1] == s3[k - 1])
    {
        return dp[i][j][k] = 1 + LCS(s1, s2, s3, i - 1, j - 1, k - 1);
    }
    int l = LCS(s1, s2, s3, i - 1, j, k);
    int r = LCS(s1, s2, s3, i, j - 1, k);
    int p = LCS(s1, s2, s3, i, j, k - 1);
    return dp[i][j][k] = max({l, r, p});
}
int main()
{
    memset(dp, -1, sizeof(dp));
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    string s3;
    cin >> s3;
    cout << LCS(s1, s2, s3, s1.size(), s2.size(), s3.size());
    return 0;
}