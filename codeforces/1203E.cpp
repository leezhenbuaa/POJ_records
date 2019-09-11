/*
ID: leezhen
TASK: practice
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <bitset>

using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<pair<int, int> > vii;
typedef long long ll;

// struct
#define inf 1e9
#define REP(i, a, b) for(int i=int(a); i<int(b); i++)
// data
int n;
vi a;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> n;
  a.resize(n);
  REP(i, 0, n) cin >> a[i];
  sort(a.begin(), a.end());
  int ans = 1;
  a[0] = max(a[0]-1, 1);
  REP(i, 1, n) {
    if(a[i] < a[i-1]) {
      a[i] = a[i-1];
      continue;
    }
    if(a[i] - 1 > a[i-1]) {
      a[i] = a[i] - 1;
    } else if(a[i] == a[i-1]) {
      a[i] = a[i] + 1;
    }
    ans++;
  }
  cout << ans << endl;
  return 0;
}
