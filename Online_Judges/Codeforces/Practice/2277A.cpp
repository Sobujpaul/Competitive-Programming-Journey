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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0;i < n;i++) {
      int x;
      cin >> x;
      mp[x]++;
    }
    int extra = 0, ans;
    for (int i = 0;i <= 100;i++) {
      if (!mp[i]) {
      	ans = i;
      	break;
      }
      else if (mp[i] + extra < k) {
      	ans = i;
      	break;
      }
      else  {
      	extra = abs (k - mp[i] - extra); 
      }
    }

    cout << ans << '\n';
    
  }
  return 0;
}