// BEGIN CUT HERE

// END CUT HERE
#line 5 "GardenHose.cpp"
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

class GardenHose {
public:
	int countDead(int n, int rowDist, int colDist, int hoseDist) {

	int j=n;
	int ret=n*n;
	int idx=0;

	for(int i=n*rowDist;i>0;i -= rowDist){
		if(i<=hoseDist){
			ret -= 2*(j*n);
			idx=j;
			break;
		}
		j--;
	}
	j=n;

	for(int i=n*colDist;i>0;i -= colDist){
		if(i<=hoseDist){
			ret -= abs(2*j*(n-idx*2));
			break;
		}
		j--;
	}

	return max(ret,0);
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 3; int Arg1 = 2; int Arg2 = 1; int Arg3 = 2; int Arg4 = 0; verify_case(0, Arg4, countDead(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 3; int Arg1 = 2; int Arg2 = 1; int Arg3 = 1; int Arg4 = 3; verify_case(1, Arg4, countDead(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 6; int Arg1 = 2; int Arg2 = 5; int Arg3 = 5; int Arg4 = 8; verify_case(2, Arg4, countDead(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 6; int Arg1 = 2; int Arg2 = 5; int Arg3 = 3; int Arg4 = 24; verify_case(3, Arg4, countDead(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 50; int Arg1 = 50; int Arg2 = 50; int Arg3 = 49; int Arg4 = 2500; verify_case(4, Arg4, countDead(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_5() { int Arg0 = 1; int Arg1 = 1; int Arg2 = 1; int Arg3 = 10000; int Arg4 = 0; verify_case(5, Arg4, countDead(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	GardenHose ___test;
	___test.run_test(-1);
}
// END CUT HERE
