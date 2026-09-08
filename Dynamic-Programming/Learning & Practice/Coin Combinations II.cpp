#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define lng long long
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using o_set = tree<T, null_type, less<T>,
                   rb_tree_tag,
                   tree_order_statistics_node_update>;

const int N = 105, X = 1e6 + 5, mod = 1e9 + 7;
int n, x, a[N], dp[X];

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  
  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  dp[0] = 1;
  for (int i = 0; i < n; i++) {
    for (int sum = a[i]; sum <= x; sum++) {
      dp[sum] += dp[sum - a[i]];
      dp[sum] %= mod;
    }
  }
  cout << dp[x] << '\n';
  return 0;
}