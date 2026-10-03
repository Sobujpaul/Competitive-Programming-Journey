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
  int n, d;
  cin >> n >> d;
  int v[n];
  for (int i = 0;i < n;i++){
  	cin >> v[i];
  }
  vector<int> ans;
  for (int i = 0;i < n;i++) {
  	bool flag = false;
  	for (int j = 0;j < n;j++) {
      if (i == j) {
      	continue;
      }
      if (abs(v[i] - v[j]) < d) {
      	flag = true;break;
      }
  	}
  	if (!flag) {
  	  ans.push_back(i + 1);
  	}
  }

  cout << ans.size() << '\n';
  for (int x:ans) {
  	cout << x << " ";
  }
  return 0;
}