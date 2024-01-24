#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e3 + 2, MOD = 1e9 + 7;

int main()
{
    int n = 5, w = 11;
    vector<int> wt = {3, 2, 4, 5, 1};
    vector<int> val = {4, 3, 5, 6, 1};
    vector<int> dp(w + 1, 0);
    for (int j = 0; j <= w; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (j - wt[i] >= 0)
                dp[j] = max(dp[j], val[i] + dp[j - wt[i]]);
        }
    }
    cout << dp[w];
    return 0;
}