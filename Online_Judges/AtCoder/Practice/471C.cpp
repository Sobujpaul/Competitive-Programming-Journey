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
  vector<int> neg, pos;
  for (int i = 0;i < n;i++) {
  	int x;
  	cin >> x;
  	if (x < 0) {
  	  neg.push_back(x);
  	}
  	else {
  	  pos.push_back(x);
  	}
  }
  sort(neg.begin(), neg.end());
  sort(pos.rbegin(), pos.rend());
  int i = neg.size() - 1, j = pos.size() - 1, curr = 0;
  lng ans = 0;
  while(1) {
  	if (neg.empty() && pos.empty()) {
  	   break;
  	}
  	else if (neg.empty() && !pos.empty()) {
      if (curr < 0) {
      	int po = pos.back();
        ans += po;
        ans += abs(curr);
        curr = po;
        pos.pop_back();
      }
      else {
      	int po = pos.back();
        ans += (po - curr);
        curr = po;
        pos.pop_back();
      }
  	}
  	else if (!neg.empty() && pos.empty()) {
  	  int ne = neg.back();
      if (curr < 0) {
        ans += abs(ne - curr);
        curr = ne;
        neg.pop_back();
      }
      else {
        ans += curr;
        ans += abs(ne);
        curr = ne;
        neg.pop_back();
      }
  	}
  	else {
      int ne = neg.back(), po = pos.back();
      int dis1 = abs(ne - curr);
      int dis2 = abs(po - curr);
      if (dis1 == dis2 || dis1 < dis2) {
      	ans += dis1;
      	curr = ne;
      	neg.pop_back();
      }
      else if (dis1 > dis2) {
      	ans += dis2;
      	curr = po;
      	pos.pop_back();
      }
  	}
  }

  cout << ans << '\n';
  return 0;
}