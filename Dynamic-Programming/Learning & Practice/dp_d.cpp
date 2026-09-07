#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define lng long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 105;
int n, w;
int weight[N], value[N];
lng dp[N][100005];

lng knapsack(int i, lng curr_weight) {
  // base case
  if (i == n + 1) {
  	return 0;
  }
  if (dp[i][curr_weight] != -1) {
  	return dp[i][curr_weight];
  }
  lng ans = knapsack(i + 1, curr_weight);
  if (curr_weight +  weight[i] <= w) {
     ans = max(ans, knapsack(i + 1, curr_weight + weight[i]) + value[i]);
  }
  return dp[i][curr_weight] = ans;
}

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n >> w;
  for (int i = 1;i <= n;i++) {
  	cin >> weight[i] >> value[i];
  }
  memset(dp, -1, sizeof dp);
  cout << knapsack(1, 0) << '\n';
  return 0;
}