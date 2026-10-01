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
  int left = 1, rght = 10;
  int cnt = 0;
  bool flag = true;
  for (int i = 0;i < n;i++) {
  	cnt++;
  	if (cnt > 10) {
  	  left += 10;
  	  rght += 10;
  	  cnt = 1;
  	  if (v[i] >= left && v[i] <= rght) {
  	  	continue;
  	  }
  	  else {
  	  	flag = false;
  	  	break;
  	  }
  	}
  	else {
  	  if (v[i] >= left && v[i] <= rght) {
  	  	continue;
  	  }
  	  else {
  	  	flag = false;
  	  	break;
  	  }	
  	}
  }

  if (flag) {
  	cout << "Yes\n";
  }
  else {
  	cout << "No\n";
  }
  return 0;
}