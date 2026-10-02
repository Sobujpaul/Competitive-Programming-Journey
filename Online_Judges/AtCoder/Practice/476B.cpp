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
  string s, t;
  cin >> s >> t;
  for (int i = 0;i < n;i++) {
  	if (t[i] == '*') {
  	  t[i] = s[i];
  	}
  }

  if (s == t) {
  	cout << "Yes\n";
  }
  else {
  	cout << "No\n";
  }
  return 0;
}