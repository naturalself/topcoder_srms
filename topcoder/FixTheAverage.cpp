// BEGIN CUT HERE

// END CUT HERE
#line 5 "FixTheAverage.cpp"
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

class FixTheAverage {
public:
	double add(vector <double> list, double tar) {

	return tar*((int)list.size()+1)-accumulate(all(list),0.0);
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const double &Expected, const double &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { double Arr0[] = { 3.0, 7.0, 2.5 }; vector <double> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 4.5; double Arg2 = 5.5; verify_case(0, Arg2, add(Arg0, Arg1)); }
	void test_case_1() { double Arr0[] = { 72, 72, 72, 72 }; vector <double> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 72; double Arg2 = 72.0; verify_case(1, Arg2, add(Arg0, Arg1)); }
	void test_case_2() { double Arr0[] = { 0, 0 }; vector <double> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 100; double Arg2 = 300.0; verify_case(2, Arg2, add(Arg0, Arg1)); }
	void test_case_3() { double Arr0[] = { 100, 100, 100, 100, 100, 100, 100, 100, 100, 100 }; vector <double> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 0; double Arg2 = -1000.0; verify_case(3, Arg2, add(Arg0, Arg1)); }
	void test_case_4() { double Arr0[] = { 0.01 }; vector <double> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); double Arg1 = 0.02; double Arg2 = 0.03; verify_case(4, Arg2, add(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	FixTheAverage ___test;
	___test.run_test(-1);
}
// END CUT HERE
