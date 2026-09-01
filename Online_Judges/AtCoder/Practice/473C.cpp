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
  int n, k;
  cin >> n >> k;
  map <int, int> mp;
  for (int i = 0;i < n;i++) {
  	int x;
  	cin >> x;
  	mp[x]++;
  }
  vector<int> v;
  for (auto [x, y]:mp) {
  	v.push_back(y);
  }
  sort(v.rbegin(), v.rend());
  int ans = 0, prev = v[0] - 1;
  for (int x:v) {
  	if (x >= prev) {
  	  ans++;
  	}
  	else { 
  	  break;
  	}
  }
  cout << ans << '\n';
  return 0;
}