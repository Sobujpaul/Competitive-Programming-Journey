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
  while (t--) {
    int x, y;
    lng k;
    cin >> x >> y >> k;
    // cout << x << " " << y <<" "<< k << '\n';
    vector<int> v;
    int temp_x = x, temp_y = y, y_prime = y;
    while (y_prime--) {
      int mod = temp_y % temp_x;
      temp_y++;
      temp_x++;
      v.push_back(mod);
    }
    if (k <= v.size()) {
      lng ans = 0;
      for (int i = 0;i < k;i++) {
      	ans += v[i];
      }
      cout << ans << '\n';
    }
    else {
      int cutof = -1;
      int diff = (y - x);
      for (int i = 0;i < v.size();i++) {
        if (v[i] == diff) {
          cutof = i;
          break;
        }
      }	
      lng ans = 0;
      for (int i = 0;i < cutof;i++) {
      	ans += v[i];
      }
      lng baki = k - cutof;
      ans += (1LL * baki * diff);
      cout << ans << '\n';
    }
  }
  return 0;
}