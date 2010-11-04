// BEGIN CUT HERE

// END CUT HERE
#line 5 "NumberMagicEasy.cpp"
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

class NumberMagicEasy {
public:
	int theNumber(string ans) {
	int ret=1;
	unsigned short tmp=0xffff;
	unsigned short card[4]={0xff00,0xf0f0,0xcccc,0xaaaa};
	
	fors(i,ans){
		if(ans[i]=='Y'){
			tmp &= card[i];
		}else{
			tmp &= ~card[i];
		}
	}
	unsigned short num = 0x8000;
	while(num != tmp){
		ret++;
		num = num >> 1;
	}

	return ret;
	}
	
// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "YNYY"; int Arg1 = 5; verify_case(0, Arg1, theNumber(Arg0)); }
	void test_case_1() { string Arg0 = "YNNN"; int Arg1 = 8; verify_case(1, Arg1, theNumber(Arg0)); }
	void test_case_2() { string Arg0 = "NNNN"; int Arg1 = 16; verify_case(2, Arg1, theNumber(Arg0)); }
	void test_case_3() { string Arg0 = "YYYY"; int Arg1 = 1; verify_case(3, Arg1, theNumber(Arg0)); }
	void test_case_4() { string Arg0 = "NYNY"; int Arg1 = 11; verify_case(4, Arg1, theNumber(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main() {
	NumberMagicEasy ___test;
	___test.run_test(-1);
}
// END CUT HERE
