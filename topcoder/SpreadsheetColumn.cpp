// BEGIN CUT HERE

// END CUT HERE
#line 5 "SpreadsheetColumn.cpp"
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

class SpreadsheetColumn {
public:
	string getLabel(int col) {
	string ret="AA";
	int idx = col-1;
	
	ret[1] += idx%26;

	if(idx/26>0){
		ret[0] += idx/26-1;
	}else{
		ret = ret[1];
	}
	
	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 1; string Arg1 = "A"; verify_case(0, Arg1, getLabel(Arg0)); }
	void test_case_1() { int Arg0 = 2; string Arg1 = "B"; verify_case(1, Arg1, getLabel(Arg0)); }
	void test_case_2() { int Arg0 = 27; string Arg1 = "AA"; verify_case(2, Arg1, getLabel(Arg0)); }
	void test_case_3() { int Arg0 = 111; string Arg1 = "DG"; verify_case(3, Arg1, getLabel(Arg0)); }
	void test_case_4() { int Arg0 = 702; string Arg1 = "ZZ"; verify_case(4, Arg1, getLabel(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	SpreadsheetColumn ___test;
	___test.run_test(-1);
}
// END CUT HERE
