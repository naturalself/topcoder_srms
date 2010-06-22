// BEGIN CUT HERE

// END CUT HERE
#line 5 "DoorsGame.cpp"
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

#define forv(i, v) for (int i = 0; i < (int)(v.size()); ++i)
#define fors(i, s) for (int i = 0; i < (int)(s.length()); ++i)
#define all(a) a.begin(), a.end() 

class DoorsGame {
public:
	int determineOutcome(string doors, int trophy) {

	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "ABCD"; int Arg1 = 2; int Arg2 = 3; verify_case(0, Arg2, determineOutcome(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "ABCC"; int Arg1 = 2; int Arg2 = -2; verify_case(1, Arg2, determineOutcome(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "ABABAB"; int Arg1 = 3; int Arg2 = 0; verify_case(2, Arg2, determineOutcome(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "ABAPDCAA"; int Arg1 = 5; int Arg2 = -4; verify_case(3, Arg2, determineOutcome(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "MOCFDCE"; int Arg1 = 3; int Arg2 = 5; verify_case(4, Arg2, determineOutcome(Arg0, Arg1)); }
	void test_case_5() { string Arg0 = "ABCCDE"; int Arg1 = 3; int Arg2 = 0; verify_case(5, Arg2, determineOutcome(Arg0, Arg1)); }
	void test_case_6() { string Arg0 = "ABCCD"; int Arg1 = 3; int Arg2 = 0; verify_case(6, Arg2, determineOutcome(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	DoorsGame ___test;
	___test.run_test(-1);
}
// END CUT HERE
