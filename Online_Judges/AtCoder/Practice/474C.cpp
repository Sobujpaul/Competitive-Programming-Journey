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
  int n, q;
  cin >> n >> q;

  list<int> ls;
  unordered_map<int, list<int>::iterator> pos;
  
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    ls.push_back(x);
    pos[x] = prev(ls.end());
  }

  while (q--) {
    int x;
    cin >> x;

    auto it = pos[x];
    ls.erase(it);
    pos.erase(x);
    
    ls.push_back(x);
    pos[x] = prev(ls.end());
  }

  for (int x : ls) {
    cout << x << " ";
  }

  return 0;
}