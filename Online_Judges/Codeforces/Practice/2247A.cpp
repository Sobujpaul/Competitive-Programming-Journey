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
    int pos_one = 0, neg_one = 0;
    for (int i = 0;i < n;i++) {
      cin >> v[i];
      if (v[i] == 1) {
        pos_one++;
      }
      else {
        neg_one++;
      }
    }
    if (n % 2 != 0) {
      cout << "No\n";
      continue;
    }

    if (pos_one == neg_one) {
      cout << "Yes\n";
    }
    else if (pos_one > neg_one) {
      pos_one -= neg_one;
      pos_one /= 2;
      bool flag = false;
      for (int i = 0;i < n - 1;i++) {
        if (v[i] == 1 && v[i + 1] == 1) {
          pos_one -= 2;
          i++;
        }
        if (pos_one == 0) {
          flag = true;
          break;
        }
       }
       if (flag) {
         cout << "Yes\n";
       }
       else {
         cout << "No\n";
       }
    }
    else {
      neg_one -= pos_one;
      neg_one /= 2;
      bool flag = false;
      for (int i = 0;i < n - 1;i++) {
        if (v[i] == -1 && v[i + 1] == -1) {
          neg_one -= 2;
          i++;
        }
        if (neg_one == 0) {
          flag = true;
          break;
        }
       }
       if (flag) {
         cout << "Yes\n";
       }
       else {
         cout << "No\n";
       }
    }
  }
  return 0;
}