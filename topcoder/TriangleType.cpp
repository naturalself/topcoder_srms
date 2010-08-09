// BEGIN CUT HERE

// END CUT HERE
#line 5 "TriangleType.cpp"
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

class TriangleType {
public:
	string type(int a, int b, int c) {
	vector<int> sl;

	sl.push_back(a);
	sl.push_back(b);
	sl.push_back(c);

	sort(all(sl));

	if(sl[0]+sl[1] <= sl[2]){
		return "IMPOSSIBLE";
	}
	if((sl[0]*sl[0])+(sl[1]*sl[1]) > sl[2]*sl[2]){
		return "ACUTE";
	}
	if((sl[0]*sl[0])+(sl[1]*sl[1]) < sl[2]*sl[2]){
		return "OBTUSE";
	}
	if((sl[0]*sl[0])+(sl[1]*sl[1]) == sl[2]*sl[2]){
		return "RIGHT";
	}

	return "IMPOSSIBLE";
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 4; int Arg2 = 5; string Arg3 = "RIGHT"; verify_case(0, Arg3, type(Arg0, Arg1, Arg2)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 4; int Arg2 = 4; string Arg3 = "ACUTE"; verify_case(1, Arg3, type(Arg0, Arg1, Arg2)); }
	void test_case_2() { int Arg0 = 3; int Arg1 = 4; int Arg2 = 6; string Arg3 = "OBTUSE"; verify_case(2, Arg3, type(Arg0, Arg1, Arg2)); }
	void test_case_3() { int Arg0 = 7; int Arg1 = 4; int Arg2 = 3; string Arg3 = "IMPOSSIBLE"; verify_case(3, Arg3, type(Arg0, Arg1, Arg2)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	TriangleType ___test;
	___test.run_test(-1);
}
// END CUT HERE
