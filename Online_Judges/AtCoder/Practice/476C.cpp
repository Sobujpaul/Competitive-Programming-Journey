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
  int high = max({v[0], v[1], v[2]}), last = min({v[0], v[1], v[2]});
  int middle = (v[0] + v[1] + v[2]) - high - last;
  vector<int> ans;
  ans.push_back(last);
  for (int i = 3;i < n;i++) {
    if (v[i] > high) {
      last = middle;
      middle = high;
      high = v[i];
    }
    else if (v[i] > middle) {
      last = middle;
      middle = v[i];
    }
    else if (v[i] > last) {
      last = v[i];
    }

    ans.push_back(last);
  }
  for (int x:ans) {
  	cout << x << '\n';
  }
  return 0;
}