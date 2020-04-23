/*
ID: leezhen
TASK: practice
LANG: C++11
*/
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<pair<int, int> > vii;
typedef long long ll;
#define mp make_pair
#define pb push_back
#define REP(i, a, b) for (int i = int(a); i < int(b); i++)
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;

// struct

// data
int x, n, m;

void solve() {
  int t = m * 10;
  REP(i, 0, n) {
    if (x <= t) {
      printf("YES\n");
      return;
    }
    x = x / 2 + 10;
  }
  if (x <= t)
    printf("YES\n");
  else
    printf("NO\n");
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d%d", &x, &n, &m);
    solve();
  }
  return 0;
}
