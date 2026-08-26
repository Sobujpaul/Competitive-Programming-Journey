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
  int a, b;
  cin >> a >> b;
  int x = (a + b);
  if ((a + b == 9) || (a - b == 9) || (a * b == 9) || (((double)a / b) == 9.0)) {
  	cout << "Nine\n";
  }
  else {
  	cout << "Nein\n";
  }
  return 0;
}