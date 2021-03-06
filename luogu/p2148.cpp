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

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, a, b;
    scanf("%d", &n);
    n /= 2;
    int ans = 0;
    while (n--) {
      scanf("%d%d", &a, &b);
      int tmp = (a - 1) | (b - 1);
      int cnt = 0;
      while (tmp & 1) cnt++, tmp /= 2;
      ans ^= cnt;
    }
    if (ans)
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}
