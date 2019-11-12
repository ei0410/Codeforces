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

    int q;
    cin >> q;

    vector<int> a(q), b(q), n(q), S(q);
    rep (i, q) {
        cin >> a[i] >> b[i] >> n[i] >> S[i];
    }

    rep (i, q) {
        if (a[i]*n[i]+b[i] < S[i]) {
            No;
            continue;
        }
        if (S[i]%a[i] == 0 && S[i]/a[i] <= n[i]) {
            YES;
            continue;
        }
        if (S[i]%n[i] <= b[i]) {
            YES;
            continue;
        }
        NO;
    }
    return 0;
}