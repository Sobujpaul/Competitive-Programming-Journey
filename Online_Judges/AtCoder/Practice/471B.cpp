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
  int t;
  cin >> t;
  map<string, int> mp;
  while (t--) {
    string s;
    cin >> s;
    string temp = "";
    for (int i = 0;i < s.size();i++) {
      temp += tolower(s[i]);
    }
    mp[temp]++;
  }
  int ans = 0;
  for (auto [x, y]:mp) {
  	ans = max(y, ans);
  }
  cout << ans << '\n';
  return 0;
}