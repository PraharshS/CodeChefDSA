#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1e9 + 7
#define INF 1e9 + 7
#define len(x) x.size()
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define FOR(i, n) for (ll i = 0; i < n; i++)
#define FORR(i, n) for (ll i = n - 1; i >= 0; i--)
#define all(v) v.begin(), v.end()
#define alla(a, n) a, a + n
#define endl "\n";
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> ump;

void solve()
{
    int x, y, M;
    cin >> M >> x >> y;
    int arr[M];

    for (int i = 0; i < M; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    sort(arr, arr + M);
    int dist = x * y;
    if ((arr[0] - dist) > 0)
    {
        count += arr[0] - dist - 1;
    }

    for (int i = 1; i < M; i++)
    {

        int prev = arr[i - 1] + dist + 1;
        int next = arr[i] - dist;
        if ((next - prev) > 0)
        {
            count += (next - prev);
        }
    }
    if ((arr[M - 1] + dist) < 100)
        count += (100 - (arr[M - 1] + dist));

    cout << count << "\n";
}
int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}