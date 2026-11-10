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
  vector<string> s(5);
  for (int i = 0;i < 5;i++) {
  	cin >> s[i];
  }
  vector<int> ans;
  for (int i = 0;i < 5;i++) {
  	int cnt = 0;
  	for (int j = 0;j < 5;j++) {
  	  if (s[i][j] == '.') {
  	  	cnt++;
  	  }
  	}
  	ans.push_back(cnt);

  	cnt = 0;
  	for (int j = 0;j < 5;j++) {
  	  if (s[j][i] == '.') {
  	  	cnt++;
  	  }
  	}
  	ans.push_back(cnt);
  }
  int cnt = 0, cnt2 = 0;
  for (int i = 0;i < 5;i++) {
  	for (int j = 0;j < 5;j++) {
  	  if (i == j && s[i][j] == '.') {
        cnt++;
  	  }
  	}
  	if (s[i][4 - i] == '.') {
  	  cnt2++;
  	}
  }
  ans.push_back(cnt);
  ans.push_back(cnt2);

  sort(ans.begin(), ans.end());
  cout << ans[0] << '\n';
  return 0;
}