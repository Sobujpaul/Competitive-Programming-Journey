#include<bits/stdc++.h>
#define lng long long
using namespace std;
const int N = 3e5 + 9;
int a[N];
int t[N * 4];
void build(int n, int b, int e) {
  if (b == e) {
    t[n] = a[b];
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  build(l, b, mid);
  build(r, mid + 1, e);
  t[n] = t[l] + t[r]; // change this if needed
}

int query(int n, int b, int e, int i, int j) {
  if (b > j || e < i) {
    return 0;  // return appropriate value
  }
  if (b >= i && e <= j) {
    return t[n];
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j); // change this if needed
}
void upd(int n, int b, int e, int i, int v) {
  if (i < b || i > e) {
    return;
  }
  if (b == e && b == i) {
    t[n] = v;
    return;
  }
  int l = 2 * n, r = 2 * n + 1;
  int mid = (b + e) / 2;
  upd(l, b, mid, i, v);
  upd(r, mid + 1, e, i, v);
  t[n] = t[l] + t[r]; // change this if needed
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  
  return 0;
}