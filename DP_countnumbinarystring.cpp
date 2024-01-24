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
    int n;
    cin >> n;
    vector<int> fib(n + 2, 0);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i <= n + 1; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << fib[n + 1];
    return 0;
}