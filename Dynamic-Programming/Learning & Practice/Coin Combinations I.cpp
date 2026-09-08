#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define lng long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 105, mod = 1e9 + 7, X = 1e6 + 5;
int n, x, a[N], dp[X];

int count(int x) {
  
  // base case
  if (x == 0) {
  	return 1;
  }
  if (dp[x] != -1) {
  	return dp[x];
  }
  // recurrence
  int ans = 0;
  for (int i = 0;i < n;i++) {
  	if (a[i] > x) {
  	  break;
  	}
  	ans += count(x - a[i]);
  	ans %= mod;
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
  cout << count(x);
  return 0;
}