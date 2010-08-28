// BEGIN CUT HERE

// END CUT HERE
#line 5 "DivToZero.cpp"
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

class DivToZero {
public:
	string lastTwo(int num, int factor) {
	string ret;

	int u_digit = num/100;
	u_digit *=100;
	debug(u_digit);
	
	debug(u_digit/factor);
	int near = u_digit/factor;
	near *= factor;

	if(near == num){
		printf("return this!! end.\n");
		stringstream ss;
		ss << near;
		string str;
		ss >> str;
		debug(str);
		//ret = str[0] + str[1];
		return ret;
	}else{
		near += factor;
		debug(near);
		printf("this?\n");
	}

	debug(near);
#if 0
	int tmp=1;
	while(tmp < u_digit){
		tmp *= factor;
	}
	debug(tmp);
#endif

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 2000000000; int Arg1 = 100; string Arg2 = "00"; verify_case(0, Arg2, lastTwo(Arg0, Arg1)); }
	void test_case_1() { int Arg0 = 1000; int Arg1 = 3; string Arg2 = "02"; verify_case(1, Arg2, lastTwo(Arg0, Arg1)); }
	void test_case_2() { int Arg0 = 23442; int Arg1 = 75; string Arg2 = "00"; verify_case(2, Arg2, lastTwo(Arg0, Arg1)); }
	void test_case_3() { int Arg0 = 428392; int Arg1 = 17; string Arg2 = "15"; verify_case(3, Arg2, lastTwo(Arg0, Arg1)); }
	void test_case_4() { int Arg0 = 32442; int Arg1 = 99; string Arg2 = "72"; verify_case(4, Arg2, lastTwo(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	DivToZero ___test;
	___test.run_test(-1);
}
// END CUT HERE
