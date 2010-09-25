// BEGIN CUT HERE

// END CUT HERE
#line 5 "UniqueDigits.cpp"
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

class UniqueDigits {
public:
	int count(int n) {
	int ret=0;

	for(int i=1;i<n;i++){
		set <int> nums;
		int dnum=0;
		for(int j=i;j!=0;j/=10){
			int digit = j%10; 
			nums.insert(digit);
			dnum++;
		}
		if(dnum == (int)nums.size()){
			ret++;
		}
	}
	
	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 21; int Arg1 = 19; verify_case(0, Arg1, count(Arg0)); }
	void test_case_1() { int Arg0 = 101; int Arg1 = 90; verify_case(1, Arg1, count(Arg0)); }
	void test_case_2() { int Arg0 = 1001; int Arg1 = 738; verify_case(2, Arg1, count(Arg0)); }
	void test_case_3() { int Arg0 = 1; int Arg1 = 0; verify_case(3, Arg1, count(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	UniqueDigits ___test;
	___test.run_test(-1);
}
// END CUT HERE
