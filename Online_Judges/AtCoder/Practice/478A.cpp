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
  int n, m;
  cin >> n >> m;
  int each = m / n;
  int remain = m % n;
  for (int i = 0;i < n;i++) {
  	if (i < remain) {
  	  cout << each + 1 << '\n';
  	}
  	else {
  	  cout << each << '\n';
  	}
  }
  return 0;
}