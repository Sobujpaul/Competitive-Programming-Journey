#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define lng long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 105, X = 1e6 + 3, inf = 1e9 + 5;
int n, x;
int a[N];
int dp[X];
int min_cost(int x) {
  // base case
  if (x == 0) {
  	return 0;
  }
  if (dp[x] != -1) {
  	return dp[x];
  }
  // recurrence
  int ans = inf;
  for (int i = 0;i < n;i++) {
  	if (a[i] > x) {
  	  break;
  	}
  	int res = min_cost(x - a[i]);
  	if (res != inf) {
      ans = min(ans, res + 1);
    }
  }
  return dp[x] = ans;
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n >> x;
  for (int i = 0;i < n;i++) {
  	cin >> a[i];
  }
  sort(a, a + n);
  memset(dp, -1, sizeof dp);
  int ans = min_cost(x);
  if (ans == inf) {
  	cout << -1 << '\n';
  }
  else {
  	cout << ans << '\n';
  }
  return 0;
}