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
  int n;cin >> n;
  vector<int> v(105, 0);
  for (int i = 0;i < n;i++) {
  	int x;
  	cin >> x;
  	v[x]++;
  	if (v[x] % 2 == 0) {
  	  v[x] = 0;
  	}
  }
  int ans = 0;
  for (int i = 1;i < 105;i++) {
  	if (v[i] == 1) {
  	  ans += i;
  	}
  }
  cout << ans << '\n';
  return 0;
}