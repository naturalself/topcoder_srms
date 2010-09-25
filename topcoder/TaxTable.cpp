// BEGIN CUT HERE

// END CUT HERE
#line 5 "TaxTable.cpp"
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

class TaxTable {
public:
	int income(int ta) {
	long double p[4];

	for(int i=0;i<4;i++) p[i]=0.0;

	p[0] = (ta+6525.0)/0.25;

	if(p[0]>=100000 && p[0]<117250){
		return (int)round(p[0]);
	}

	p[1] = (ta+10042.5)/0.28;

	if(p[1]>=117250 && p[1]<178650){
		return (int)round(p[1]);
	}

	p[2]= (ta+18975.0)/0.33;

	if(p[2]>=178650 && p[2]<319100){
		return (int)round(p[2]);
	}

	p[3] = (ta+25357.0)/0.35;
	
	if(p[3]>=319100){
		return (int)round(p[3]);
	}

	return -1;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 47025; int Arg1 = 200000; verify_case(0, Arg1, income(Arg0)); }
	void test_case_1() { int Arg0 = 1000; int Arg1 = -1; verify_case(1, Arg1, income(Arg0)); }
	void test_case_2() { int Arg0 = 47026; int Arg1 = 200003; verify_case(2, Arg1, income(Arg0)); }
	void test_case_3() { int Arg0 = 86304; int Arg1 = 319027; verify_case(3, Arg1, income(Arg0)); }
	void test_case_4() { int Arg0 = 22792; int Arg1 = 117266; verify_case(4, Arg1, income(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	TaxTable ___test;
	___test.run_test(-1);
}
// END CUT HERE
