#pragma GCC optimize("O3,unroll-loops")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

#define fastio()                                                               \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL)
#define MOD 1000000007
#define MODD 998244353
#define INF (int)1e18
#define EPS 1e-18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define int int64_t
#define vi vector<int>
#define vl vector<long long>

#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define vin(x, v)                                                              \
  for (auto &x : v)                                                            \
    cin >> x;
#define vout(x, v)                                                             \
  for (auto x : v)                                                             \
    cout << x << " ";
#define MEM(a, b) memset(a, (b), sizeof(a))
#define forl for (int i = 0; i < n; i++)
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define rep(i, j) loop(i, 0, j)
#define rrep(i, j) rloop(i, j, 0)
#define MP make_pair
#define endl "\n"
#define cp(t)                                                                  \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t--)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    pbds; // find_by_order, order_of_key

void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.ff);
  cerr << ",";
  _print(p.ss);
  cerr << "}";
}
template <class T> void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V> void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";}
// cerr << "]";}

void solve() {
  int k;
  cin >> k;

  for (int n = 1; n * n <= k; ++n) {
    if (k % n == 0) {
      int m = k / n;
      cout << n << " " << m << endl;
      break;
    }
  }
}

signed main() {
  fastio();
  cp(_) solve();
  return 0;
}
