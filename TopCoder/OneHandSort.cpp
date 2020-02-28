// BEGIN CUT HERE

// END CUT HERE
#line 5 "OneHandSort.cpp"
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<pair<int, int> > vii;
typedef long long ll;
#define REP(i, a, b) for (int i = int(a); i < int(b); i++)
const int inf = 1e9;
const int mod = 1e9 + 7;

class OneHandSort {
 public:
  vector<int> sortShelf(vector<int> target) {
    vi ans;
    int empty = target.size(), n = target.size();
    vi pos(n);
    REP(i, 0, n) pos[target[i]] = i;
    REP(i, 0, n) {
      if (pos[i] != i) {
        int vs = i;
        int vt = pos[i];
        ans.push_back(pos[i]);
        ans.push_back(i);
        ans.push_back(empty);
        swap(target[vs], target[vt]);
        pos[target[vs]] = vs;
        pos[target[vt]] = vt;
      }
    }
    return ans;
  }

  // BEGIN CUT HERE
 public:
  void run_test(int Case) {
    if ((Case == -1) || (Case == 0)) test_case_0();
    if ((Case == -1) || (Case == 1)) test_case_1();
    if ((Case == -1) || (Case == 2)) test_case_2();
  }

 private:
  template <typename T>
  string print_array(const vector<T> &V) {
    ostringstream os;
    os << "{ ";
    for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end();
         ++iter)
      os << '\"' << *iter << "\",";
    os << " }";
    return os.str();
  }
  void verify_case(int Case, const vector<int> &Expected,
                   const vector<int> &Received) {
    cerr << "Test Case #" << Case << "...";
    if (Expected == Received)
      cerr << "PASSED" << endl;
    else {
      cerr << "FAILED" << endl;
      cerr << "\tExpected: " << print_array(Expected) << endl;
      cerr << "\tReceived: " << print_array(Received) << endl;
    }
  }
  void test_case_0() {
    int Arr0[] = {0, 1, 2};
    vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
    int Arr1[] = {};
    vector<int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0])));
    verify_case(0, Arg1, sortShelf(Arg0));
  }
  void test_case_1() {
    int Arr0[] = {1, 2, 3, 0};
    vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
    int Arr1[] = {2, 1, 0, 3, 4};
    vector<int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0])));
    verify_case(1, Arg1, sortShelf(Arg0));
  }
  void test_case_2() {
    int Arr0[] = {1, 0, 3, 2};
    vector<int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0])));
    int Arr1[] = {0, 1, 4, 2, 3, 4};
    vector<int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0])));
    verify_case(2, Arg1, sortShelf(Arg0));
  }

  // END CUT HERE
};

// BEGIN CUT HERE
int main() {
  OneHandSort ___test;
  ___test.run_test(-1);
  system("pause");
}
// END CUT HERE
