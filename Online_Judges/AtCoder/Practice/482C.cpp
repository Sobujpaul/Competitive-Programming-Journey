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
  int h, w, n, q;
  cin >> h >> w >> n >> q;
  vector<int> row(n), col(n);
  for (int i =0;i < n;i++) {
  	cin >> row[i] >> col[i];
  }

  sort(row.begin(), row.end());
  sort(col.begin(), col.end());
 
  while(q--) {
  	int type, l, r;
  	cin >> type >> l >> r;
  	if (type == 1) {
  	  auto left = lower_bound(row.begin(), row.end(), l);
  	  auto right = upper_bound(row.begin(), row.end(), r);
  	  cout << right - left << '\n';
  	}
  	else {
  	  auto left = lower_bound(col.begin(), col.end(), l);
  	  auto right = upper_bound(col.begin(), col.end(), r);
  	  cout << right - left << '\n';
  	}
  }
  return 0;
}