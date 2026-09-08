#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define lng long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int N = 1e5 + 9;
const lng inf = 1e14;
int n;
int a[N];
lng dp[N];

lng min_cost(int i) {
  if (i == n) {
  	return 0;
  }
  if (dp[i] != -1) {
  	return dp[i];
  } 
  lng ans = min_cost(i + 1) + abs(a[i] - a[i + 1]);
  
  if (i + 2 <= n) {
  	ans  = min(ans, min_cost(i + 2) + abs(a[i] - a[i + 2]));
  }
  return dp[i] = ans;
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n;
  for (int i = 1;i <= n;i++) {
  	cin >> a[i];
  }
  memset(dp, -1, sizeof dp);
  cout << min_cost(1);
  return 0;
}