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
  lng n, m, k;
  cin >> n >> m >> k;
  vector<int> v(n);
  for (int i = 0;i < n;i++) {
  	cin >> v[i];
  }
  vector<bool> ans(n, false);
  queue<pair<int, int>> q;
  lng current_sum = 0;
  for (int i = 0;i < n;i++) {
  	lng l = max(0LL, i - m + 1);
    while (!q.empty() && q.front().first < l) {
      current_sum -= q.front().second;
      q.pop();
    }
   	if (current_sum + v[i] <= k) {
  	  ans[i] = true;
  	  q.push({i, v[i]});
  	  current_sum += v[i];
  	}
  }

  for (int i = 0;i < n;i++) {
  	if (ans[i]) {
  	  cout << "Yes\n";
  	}
  	else {
  	  cout << "No\n";
  	}
  }
  return 0;
}