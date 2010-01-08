// BEGIN CUT HERE

// END CUT HERE
#line 5 "LCMRange.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class LCMRange {
public:
	int lcm(int first, int last) {

	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; int Arg1 = 5; int Arg2 = 60; verify_case(0, Arg2, lcm(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 4; int Arg1 = 5; int Arg2 = 20; verify_case(1, Arg2, lcm(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 1; int Arg1 = 12; int Arg2 = 27720; verify_case(2, Arg2, lcm(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	LCMRange ___test;
	___test.run_test(-1);
}
// END CUT HERE
