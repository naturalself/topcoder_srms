// BEGIN CUT HERE

// END CUT HERE
#line 5 "RectangularIsland.cpp"
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

class RectangularIsland {
public:
	double theProbablity(int width, int height, int x, int y, int steps) {

	long double ret = 0.0;
	int r_step = 0;
	
	if(min(width-x,height-y)>steps){
		return 1.0;
	}

	
	
	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 5; int Arg1 = 8; int Arg2 = 4; int Arg3 = 3; int Arg4 = 1; double Arg5 = 0.75; verify_case(0, Arg5, theProbablity(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_1() { int Arg0 = 5; int Arg1 = 8; int Arg2 = 4; int Arg3 = 7; int Arg4 = 1; double Arg5 = 0.5; verify_case(1, Arg5, theProbablity(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_2() { int Arg0 = 2; int Arg1 = 2; int Arg2 = 0; int Arg3 = 1; int Arg4 = 5; double Arg5 = 0.03125; verify_case(2, Arg5, theProbablity(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_3() { int Arg0 = 58; int Arg1 = 85; int Arg2 = 47; int Arg3 = 74; int Arg4 = 1000; double Arg5 = 0.13056659769966347; verify_case(3, Arg5, theProbablity(Arg0, Arg1, Arg2, Arg3, Arg4)); }
	void test_case_4() { int Arg0 = 1000; int Arg1 = 1000; int Arg2 = 123; int Arg3 = 456; int Arg4 = 5000; double Arg5 = 0.9868611148475199; verify_case(4, Arg5, theProbablity(Arg0, Arg1, Arg2, Arg3, Arg4)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	RectangularIsland ___test;
	___test.run_test(-1);
}
// END CUT HERE
