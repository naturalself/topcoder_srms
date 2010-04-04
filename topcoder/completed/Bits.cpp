// BEGIN CUT HERE

// END CUT HERE
#line 5 "Bits.cpp"
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

class Bits {
public:
	int minBits(int n) {

	long long b=0x01;
	int digit=0;

	while(b <= n){
		b = b << 1;
		digit++;
	}

	return digit;
	
#if 0
	return (int)log2(n)+1;
#endif
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 32; int Arg1 = 6; verify_case(0, Arg1, minBits(Arg0)); }
	void test_case_1() { int Arg0 = 12; int Arg1 = 4; verify_case(1, Arg1, minBits(Arg0)); }
	void test_case_2() { int Arg0 = 1; int Arg1 = 1; verify_case(2, Arg1, minBits(Arg0)); }
	void test_case_3() { int Arg0 = 1500; int Arg1 = 11; verify_case(3, Arg1, minBits(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	Bits ___test;
	___test.run_test(-1);
}
// END CUT HERE
