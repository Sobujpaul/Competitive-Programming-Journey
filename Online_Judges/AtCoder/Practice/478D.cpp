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
  int n, q;
  cin >> n >> q;
  map<int, vector<pair<int, int>>> vp;
  set<int> st[n + 2];
  while(q--) {
  	int l, r, x;
  	cin >> l >> r >> x;
  	vp[x].push_back({l, r});
  }
  vector<int> ans(n + 2, 0);
  for (auto &[k, vec]:vp) {
  	sort(vec.begin(), vec.end());
  	int l = vec[0].first;
  	int r = vec[0].second;
  	for (int i = 0;i < vec.size();i++) {
  	  int new_l = vec[i].first;
  	  int new_r = vec[i].second;
  	  if (new_l <= r) {
  	  	r = max(r, new_r);
  	  }
  	  else {
  	  	ans[l]++;
  	  	ans[r + 1]--;
  	  	l = new_l;
  	  	r = new_r;
  	  }
  	}
  	ans[l]++;
  	ans[r + 1]--;
  }
  for (int i = 1;i <= n;i++) {
  	ans[i] += ans[i - 1];
  }
  for (int i = 1;i <= n;i++) {
  	cout << ans[i] << " ";
  }
 
  return 0;
}