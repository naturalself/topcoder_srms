// BEGIN CUT HERE

// END CUT HERE
#line 5 "DigitHoles.cpp"
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

class DigitHoles {
public:
	int numHoles(int number) {
	int ret=0;
	
	for(int i=number;i!=0;i/=10){
		int tar=i%10;

		if(tar == 4 || 
		   tar == 6 ||
		   tar == 9 ||
		   tar == 0){
			ret++;
		}else if(tar==8){
			ret += 2;
		}

	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 42; int Arg1 = 1; verify_case(0, Arg1, numHoles(Arg0)); }
	void test_case_1() { int Arg0 = 669; int Arg1 = 3; verify_case(1, Arg1, numHoles(Arg0)); }
	void test_case_2() { int Arg0 = 688; int Arg1 = 5; verify_case(2, Arg1, numHoles(Arg0)); }
	void test_case_3() { int Arg0 = 123; int Arg1 = 0; verify_case(3, Arg1, numHoles(Arg0)); }
	void test_case_4() { int Arg0 = 456; int Arg1 = 2; verify_case(4, Arg1, numHoles(Arg0)); }
	void test_case_5() { int Arg0 = 789; int Arg1 = 3; verify_case(5, Arg1, numHoles(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	DigitHoles ___test;
	___test.run_test(-1);
}
// END CUT HERE
