#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define lng long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 102, MAX = 300, NEG = INT_MIN;

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vector<int> v(n + 1);
  for (int i = 1;i <= n;i++) {
  	cin >> v[i];
  }
  int max_i, min_i;
  int maxi = 0;
  for (int i = 1;i <= n;i++) {
  	maxi = max(maxi, v[i]);
  	if (maxi > v[i]) {
  		max_i = i;
  	}
  }
  int mini = INT_MAX;
  for (int i = n;i >= 1;i--) {
  	mini = min(mini, v[i]);
  	if (v[i] > mini) {
  	  min_i = i;
  	}
  }


  if (k + min_i > max_i) {
  	cout << "Yes\n";
  }
  else {
  	cout << "No\n";
  }
  return 0;
}