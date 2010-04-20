// BEGIN CUT HERE

// END CUT HERE
#line 5 "Chivalry.cpp"
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

class Chivalry {
public:
	string getOrder(string first, string second) {

	string ret;

	if(first[0] == 'M' && second[0] == 'M' ||
		first[0] == 'W' && second[0] == 'M'){
		ret = first + second;
	}else if(first[0] == 'M' && second[0] == 'W' ||
		first[0] == 'W' && second[0] == 'W'){
		ret = second + first;
	}
	
	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "M"; string Arg1 = "W"; string Arg2 = "WM"; verify_case(0, Arg2, getOrder(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "MM"; string Arg1 = "MW"; string Arg2 = "MMMW"; verify_case(1, Arg2, getOrder(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "MMMM"; string Arg1 = "W"; string Arg2 = "WMMMM"; verify_case(2, Arg2, getOrder(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "M"; string Arg1 = "WWW"; string Arg2 = "WWWM"; verify_case(3, Arg2, getOrder(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW"; string Arg1 = "WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM"; string Arg2 = "WWWM"; verify_case(4, Arg2, getOrder(Arg0, Arg1)); }
// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	Chivalry ___test;
	___test.run_test(-1);
}
// END CUT HERE
