// BEGIN CUT HERE

// END CUT HERE
#line 5 "MassiveNumbers.cpp"
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

class MassiveNumbers {
public:
	string getLargest(string nA, string nB) {
	string ret;
	int bs_a=0;
	int bs_b=0;
	int p_a=0;
	int p_b=0;

	sscanf(nA.c_str(),"%d^%d",&bs_a,&p_a);
	sscanf(nB.c_str(),"%d^%d",&bs_b,&p_b);
	
	if(((double)p_a*log((double)bs_a)) > ((double)p_b*log((double)bs_b))){
		ret = nA;
	}else{
		ret = nB;
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "3^100"; string Arg1 = "2^150"; string Arg2 = "3^100"; verify_case(0, Arg2, getLargest(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "1^1000"; string Arg1 = "2^1"; string Arg2 = "2^1"; verify_case(1, Arg2, getLargest(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "893^605"; string Arg1 = "396^906"; string Arg2 = "396^906"; verify_case(2, Arg2, getLargest(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "999^1000"; string Arg1 = "1000^999"; string Arg2 = "999^1000"; verify_case(3, Arg2, getLargest(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	MassiveNumbers ___test;
	___test.run_test(-1);
}
// END CUT HERE
