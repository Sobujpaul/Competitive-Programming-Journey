#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define lng long long
using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int N = 102, MAX = 300, NEG = INT_MIN;
int n, v;
vector<int> w(N);
int dp[N][4][MAX];
bool vis[N][4][MAX];
int rec(int i, int cnt, int s) {
  
  if (cnt == 0 && s >= 0) {
  	return 0;
  }
  if (i > n || s < 0) {
  	return NEG;
  }

  if (vis[i][cnt][s]) {
  	return dp[i][cnt][s];
  }
  vis[i][cnt][s] = true;
  int ans = rec(i + 1, cnt, s);
  int next = rec(i + 1, cnt - 1, s - i);
  if (next != NEG)
    ans = max(ans, next + w[i]);
   
  return dp[i][cnt][s] = ans;

}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n >> v;
  for (int  i = 1;i <= n;i++) {
  	cin >> w[i];
  }
  memset(dp, -1,sizeof dp);
  int ans = rec(1, 3, v);
  cout << (ans == NEG ? 0 :ans) << '\n';
  return 0;
}