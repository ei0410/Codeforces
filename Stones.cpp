#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    vector<int> ans(t);
    rep (i, t) {
        int a, b, c;
        cin >> a >> b >> c;
        int tmp = 0;
        while (c > 1 && b > 0) {
            c -= 2;
            b -= 1;
            tmp += 3;
        }
        while (b > 1 && a > 0) {
            b -= 2;
            a -= 1;
            tmp += 3;
        }
        ans[i] = tmp;
    }

    rep (i, t) {
        cout << ans[i] << endl;
    }
    return 0;
}