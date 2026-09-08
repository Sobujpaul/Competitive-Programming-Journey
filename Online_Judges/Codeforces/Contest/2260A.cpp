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
    int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    int mini = 2;
    for (int i = 0;i < n;i++) {
      cin >> v[i];
      mini = min(mini, v[i]);
      mp[v[i]]++;
    }
    
    if (mini != 1 && mp[mini] >= 2) {
      int ans = 0;
      if (v[0] != mini) {
        ans++;
      }
      if (v[n - 1] != mini) {
        ans++;
      }
      cout << ans << '\n';
    }
    else {
      cout << -1 << '\n';
    }
  }
  return 0;
}