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

    int n;
    cin >> n;

    vector<int> a(n);
    rep (i, n) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll ans = 0;
    ll tmp1 = 0;
    ll tmp2 = 0;
    rep (i, n/2) {
        tmp1 += a[i];
    }
    for (int i = n/2; i < n; i++) {
        tmp2 += a[i];
    }
    ans += tmp1*tmp1;
    ans += tmp2*tmp2;

    cout << ans << endl;
    return 0;
}