#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define lng long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int mod = 1e9 + 7, N = 1e6 + 5;
int n;
int dp[N];
int combinations(int n) {
  // base case

  if (n == 0) {
  	return 1;
  }	

  if (dp[n] != -1) {
  	return dp[n];
  }
  int ans = 0;
  
  // recurrence

  for (int i = 1;i <= min(6, n);i++) {
   	ans += combinations(n - i);
   	ans %= mod;
  }
  return dp[n] = ans;
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n;
  memset(dp, -1, sizeof dp);
  cout << combinations(n) << '\n';
  return 0;
}