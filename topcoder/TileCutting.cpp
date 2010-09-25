// BEGIN CUT HERE

// END CUT HERE
#line 5 "TileCutting.cpp"
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>

using namespace std;

#define debug(p) cout << #p << "=" << p << endl;
#define forv(i, v) for (int i = 0; i < (int)(v.size()); ++i)
#define fors(i, s) for (int i = 0; i < (int)(s.length()); ++i)
#define all(a) a.begin(), a.end() 
#define pb push_back

class TileCutting {
public:
	int cuts(vector <string> layout) {

	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = { "..",
  ".." }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(0, Arg1, cuts(Arg0)); }
	void test_case_1() { string Arr0[] = { "x.",
  ".." }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(1, Arg1, cuts(Arg0)); }
	void test_case_2() { string Arr0[] = { ".x",
  "xx" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, cuts(Arg0)); }
	void test_case_3() { string Arr0[] = { "xxxx..xxxx",
  "x..x..xx..",
  "x..xxxxx..",
  "xxxxxxxxxx" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; verify_case(3, Arg1, cuts(Arg0)); }
	void test_case_4() { string Arr0[] = { "xxxxxx",
  "x....x" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(4, Arg1, cuts(Arg0)); }
	void test_case_5() { string Arr0[] = { "x..x....",
  "x..xx...",
  "..xx....",
  "...x....",
  "......xx",
  "......xx" }; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(5, Arg1, cuts(Arg0)); }
	void test_case_6() { string Arr0[] = { "x..xx.x..x.xx..x.xx.",
  "..x..x..x.x..xx...x.",
  ".xx...x...x...x..x..",
  ".xx...x.x.x...x..xx.",
  ".x..x...x.....x...x.",
  ".x.x.x..x..x..x..x.x",
  "...x.x.x.x.x.x.x...x",
  ".x..x..x...x..x...x.",
  "...x.x.x..x.x.x.....",
  "...x.x.x..x.x.xxx.x.",
  "xx.xx.xx.x.x.x.x..x.",
  ".x..xxx...x.xx...x.x",
  "xx..x.x...x.x.x.x..x",
  ".xx..x.xx.xxxxx...xx",
  "x....x.x...x...x.x..",
  ".x.xx.x..x.x.xxx.x..",
  "...xx.xxx.....xx.xxx",
  ".xx..x..xx.x...x.xx.",
  "x.x...x.x.xx.x..x.xx",
  ".....xx.x.......xx.x",
  "x...x.xx.x..x....x..",
  ".x..xxx.....x.x.x.xx" }
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 121; verify_case(6, Arg1, cuts(Arg0)); }
	void test_case_7() { string Arr0[] = { "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  "..................................................",
  ".................................................." }
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(7, Arg1, cuts(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	TileCutting ___test;
	___test.run_test(-1);
}
// END CUT HERE
