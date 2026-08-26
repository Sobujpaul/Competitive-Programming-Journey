#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define lng long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0;i < n;i++) {
  	cin >> v[i];
  }
  vector<int> suffix_sum(n, 0);
  suffix_sum[n - 1] = v[n - 1];
  for (int i = n - 2;i >= 0;i--) {
  	suffix_sum[i] = suffix_sum[i + 1] + v[i];
  }

  // for (int x: suffix_sum) {
  // 	cout << x << " ";
  // }

  int curr_sum = 0, ans = INT_MAX;
  for (int i = 0;i < n - 1;i++) {
  	curr_sum += v[i];
  	ans  = min(abs(curr_sum - suffix_sum[i + 1]), ans);
  }

  cout << ans << '\n';
  return 0;
}