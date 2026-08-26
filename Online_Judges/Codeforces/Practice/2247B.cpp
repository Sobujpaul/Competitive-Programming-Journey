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
    int n, m, k;
    cin >> n >> m >> k;
    if (m > k) {
      cout << "No\n";
      continue;
    }
    vector<int> temp;
    for (int i = 0;i < m - 1;i++) {
      temp.push_back(1);
    }
    if (k - m + 1 != 0)
      temp.push_back(k - m + 1);
    int st = 0;
    vector<int> final = temp;
    for (int i = 0;i < n - m;i++) {
      if (st + 1 < temp.size()) {
      	final.push_back(temp[st]);
      	st += 1;
      }
      else {
      	st = 0;
      	final.push_back(temp[st]);
      	st += 1;
      }
    }
    cout << "Yes\n";
    for (int i = 0;i < n;i++) {
      cout << final[i] << " ";
    }
    cout << '\n';
  }
  return 0;
}