// BEGIN CUT HERE

// END CUT HERE
#line 5 "InsideOut.cpp"
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

class InsideOut {
public:
	string unscramble(string line) {
	string ret="";

	string pre;
	string after;

	int half = (int)((line.size())/2);

	pre = line.substr(0,half);
	reverse(all(pre));

	after = line.substr(half,half);
	reverse(all(after));

	ret = pre+after;

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "I ENIL SIHTHSIREBBIG S"; string Arg1 = "THIS LINE IS GIBBERISH"; verify_case(0, Arg1, unscramble(Arg0)); }
	void test_case_1() { string Arg0 = "LEVELKAYAK"; string Arg1 = "LEVELKAYAK"; verify_case(1, Arg1, unscramble(Arg0)); }
	void test_case_2() { string Arg0 = "H YPPAHSYADILO"; string Arg1 = "HAPPY HOLIDAYS"; verify_case(2, Arg1, unscramble(Arg0)); }
	void test_case_3() { string Arg0 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; string Arg1 = "MLKJIHGFEDCBAZYXWVUTSRQPON"; verify_case(3, Arg1, unscramble(Arg0)); }
	void test_case_4() { string Arg0 = "RUT OWT SNEH HCNERF EERHTEGDIRTRAP A DNA  SEVODELT"; string Arg1 = "THREE FRENCH HENS TWO TURTLEDOVES  AND A PARTRIDGE"; verify_case(4, Arg1, unscramble(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	InsideOut ___test;
	___test.run_test(-1);
}
// END CUT HERE
