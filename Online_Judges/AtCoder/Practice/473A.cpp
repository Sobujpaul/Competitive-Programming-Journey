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
  int mid = n / 2, ans = 0;
  for (int i = 0;i < n;i++) {
  	int x;
  	cin >> x;
  	if (i >= mid) {
  	  ans += x;
  	}
  }
  cout << ans << '\n';
  return 0;
}