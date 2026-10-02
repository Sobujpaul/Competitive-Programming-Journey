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
  int one = 0, ten = 0, hundred = 0;
  for (int i= 0;i < n;i++) {
    int x = v[i];
    int need_thousand_note = ceil((double)x / 1000);
    int change = need_thousand_note * 1000 - x;
    int temp = change;
    hundred += (temp / 100);
    temp %= 100;
    ten += (temp / 10);
    temp %= 10;
    one += temp;
  }
  cout << one << " " << ten << " " << hundred << '\n';
  return 0;
}